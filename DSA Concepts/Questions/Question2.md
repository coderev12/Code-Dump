# Problem statement
You are given a 2D 0-indexed array of strings, access_times, with size n. For each i where `0 <= i <= n - 1`, `access_times[i][0] `represents the name of an employee, and `access_times[i][1] `represents the access time of that employee. All entries in access_times are within the same day.

The access time is represented as four digits using a 24-hour time format, for example, `"0800"` or `"2250".`

An employee is said to be high-access if he has accessed the system three or more times within a one-hour period.

Times with exactly one hour of difference are not considered part of the same one-hour period. For example, `"0815"` and` "0915"` are not part of the same one-hour period.

Access times at the start and end of the day are not counted within the same one-hour period. For example, `"0005"` and `"2350"` are not part of the same one-hour period.

Return a list that contains the names of high-access employees with any order you want.

# Code
```
class Solution {
    public List<String> findHighAccessEmployees(List<List<String>> access_times) {
        Map<String,ArrayList<Integer>> m = new HashMap<>();
        List<String> ans = new ArrayList<>();
        for(List<String> at: access_times){
            if(m.containsKey(at.get(0))){
                m.get(at.get(0)).add(Integer.parseInt(at.get(1)));
            }else{
                ArrayList<Integer> x = new ArrayList<>();
                x.add(Integer.parseInt(at.get(1)));
                m.put(at.get(0),x);
            }
        }
        for(Map.Entry<String,ArrayList<Integer>> s : m.entrySet()){
            ArrayList<Integer> x = s.getValue();
            int n = x.size();
            if(n >= 3){
                Collections.sort(x);
                int i = 0;
                for(int j = 2;j<n;j++){
                    if(x.get(j) - x.get(i) < 100){
                        ans.add(s.getKey());
                        break;
                    }
                    i++;
                }
            }
        }            
        return ans;
    }
}
```