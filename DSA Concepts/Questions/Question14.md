## Problem Statement

Given a string, Your task is to complete the function `encode` that returns the run length encoded string for the given string.
For example, if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3dex6”.

You are required to complete the function `encode` that takes only one argument, the string which is to be encoded, and returns the encoded string.


## Code
```
class Solution {
    public int compress(char[] chars) {
        String compressed = "";
        int i = 0;
        while(i < chars.length){
            int count = 0;
            char currChar = chars[i];
            int j = i;
            while(j < chars.length && chars[j] == currChar){
                count++;
                j++;
            }
            if(count == 1){
                compressed += currChar;
            }else{
                compressed += currChar + Integer.toString(count);
            }
            i++;
            i = j;
        }
        for(int j = 0;j<compressed.length();j++){
            chars[j] = compressed.charAt(j);
        }
        return compressed.length();
    }
}
```