## Problem Statement
Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
![image.png](https://assets.leetcode.com/users/images/2fd100f7-d046-41db-8a3f-667965b7cb98_1704450346.8007588.png)


A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


## Code
```
class Solution {
    public List<String> letterCombinations(String digits) {
        if(digits.length() == 0){
            return new ArrayList<String>();
        }
        String mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        List<String> result = new ArrayList<>();
        int index = 0;
        return letterCombinations(digits,index,mapping,"",result);
    }
    public static List<String> letterCombinations(String digits,int index, String[] mapping,String output,List<String> result){
        if(index == digits.length()){
            result.add(output);    
            return result;
        }
        int i = digits.charAt(index)-'0';
        String m = mapping[i];
        for(int k= 0;k<m.length();k++){
            result.add(output);
            letterCombinations(digits,index+1,mapping,output+m.charAt(k),result);
            result.remove(output);
        }
        return result;



    }
}
```