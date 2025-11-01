## Problem Statement

You are given two positive integers `startPos` and `endPos`. Initially, you are standing at position `startPos` on an infinite number line. With one step, you can move either one position to the left, or one position to the right.

Given a positive integer `k`, return the number of different ways to reach the position `endPos` starting from `startPos`, such that you perform exactly `k` steps. Since the answer may be very large, return it modulo 10^9 + 7.

Two ways are considered different if the order of the steps made is not exactly the same.

Note that the number line includes negative integers.

## Code
```
class Solution {
    private static int MOD = 1000000007;
    public int numberOfWays(int startPos, int endPos, int k) {
        int[][] dp = new int[3002][1001];
        for(int[] a: dp){
            Arrays.fill(a,-1);
        }
        return numberOfWays(startPos,startPos,k,endPos,dp);
    }
    private int numberOfWays(int startPos, int currPos, int k, int endPos,int[][] dp){
        // System.out.println(currPos);
        // if(currPos < 0) return 0;
        if(k == 0){
            if(currPos == endPos){
                return 1;
            }
            return 0;
        }
        if(dp[currPos + 1001][k] != -1) return dp[currPos + 1001][k];
        int op1 = numberOfWays(startPos,currPos+1,k-1,endPos,dp) % MOD;
        int op2 = numberOfWays(startPos,currPos-1,k-1,endPos,dp) % MOD;

        
        return dp[currPos + 1001][k] = (op1 + op2) % MOD;
    }
}
```