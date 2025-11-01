## Problem Statement

Given a pattern containing only I's and D's. I for increasing and D for decreasing. Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can't repeat.

## Problem Statement

**Input:**
D
**Output:**
21

**Explanation:**
The character 'D' is meant for decreasing, so we choose the minimum number among all possible numbers like 21, 31, 54, 87, etc.


## Code
```
class Solution{
    static String printMinNumberForPattern(String S){
        // code here
        int n=S.length();
        char[] arr=new char[n+1];
        for(int i=0;i<n+1;i++){
            arr[i]=(char)(i+1+'0');
        }
        
        for(int i=n-1;i>=0;i--){
            if(S.charAt(i)=='D'){
                swap(arr,i,i+1);
                int j=i+1;
                while(j<n && S.charAt(j)=='D'){
                    swap(arr,j,j+1);
                    j++;
                }
            }
        }
    String res = new String(arr);
    return res;
    }


    static void swap(char[] arr,int i,int j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
```