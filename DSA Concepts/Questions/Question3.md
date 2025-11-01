## Problem Statement

You are given a 0-indexed array of strings `nums`, where each string is of equal length and consists of only digits.

You are also given a 0-indexed 2D integer array `queries` where `queries[i] = [ki, trimi]`. For each `queries[i]`, you need to:

1. Trim each number in `nums` to its rightmost `trimi` digits.
2. Determine the index of the `k`-th smallest trimmed number in `nums`. If two trimmed numbers are equal, the number with the lower index is considered to be smaller.
3. Reset each number in `nums` to its original length.

Return an array `answer` of the same length as `queries`, where `answer[i]` is the answer to the `i`-th query.

**Note:**
- To trim to the rightmost `x` digits means to keep removing the leftmost digit, until only `x` digits remain.
- Strings in `nums` may contain leading zeros.


# Code
```

class Solution {
    
    class Pair implements Comparable<Pair>{
        String first;
        int second;
        Pair(String x, int y){
            first = x;
            second = y;
        }

        public int compareTo(Pair p){
            int m = (this.first.compareTo(p.first));
            if(m == 0){
                return (this.second-p.second);
            }
            return m;
        }
    }
    public int[] smallestTrimmedNumbers(String[] nums, int[][] queries) {
        int n = queries.length;
        int[] ans = new int[n];
        for(int i = 0;i<queries.length;i++){
            int k = queries[i][0];
            int trim = queries[i][1];
            PriorityQueue<Pair> p = new PriorityQueue<>();
            for(int j = 0; j < nums.length;j++){
                String number = nums[j].substring(nums[j].length()-trim,nums[j].length());
                // System.out.println(Long.parseLong(number));
                p.add(new Pair(number,j));
            }
            // print(p);
            ans[i] = fetch(p,k);
            // System.out.println();
            // ans[i] = 0;
        }
        return ans;
    }
    // public static void print(PriorityQueue<Pair> p){
    //     while (!p.isEmpty()) {
    //         Pair pair = p.poll();
    //         System.out.println("Key: " + pair.first + ", Value: " + pair.second);
    //     }
    //     System.out.println();
    // }
    public static int fetch(PriorityQueue<Pair> p, int k){
        int num = 0;
        while(k-- > 0){
            num = p.poll().second;
        }   
        return num;
    }
}
```