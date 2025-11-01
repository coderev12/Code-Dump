## Problem statement
Find all valid combinations of `k` numbers that sum up to `n` such that the following conditions are true:

1. Only numbers `1` through `9` are used.
2. Each number is used `at most once`.

Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

 
## Code
```
class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<Integer> curr = new ArrayList<>();
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        int[] a = new int[9];
        for(int i  = 0;i < 9;i++){
            a[i] = i+1;
        }
        int[][] dp = new int[10][n+1];
        combinationSum(0,a,k,0,n,curr,ans);
        return ans;
    }
    public static void combinationSum(int index,int[]arr, int k,int s, int n,List<Integer> curr, List<List<Integer>> ans){
        System.out.println(curr);
        if(index == arr.length){
            if(k == 0 && s == n){
                ans.add(new ArrayList<>(curr));
            }
            return;
        }
        s += arr[index];
        curr.add(arr[index]);
        combinationSum(index+1,arr,k-1,s,n,curr,ans);
        s -= arr[index];
        curr.remove(curr.size()-1);
        combinationSum(index+1,arr,k,s,n,curr,ans);
    } 
}
```