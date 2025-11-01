# Problem Statement
On day `1`, one person discovers a secret.
You are given an integer `delay`, which means that each person will share the secret with a new person every day, starting from `delay` days after discovering the secret. You are also given an integer forget, which means that each person will `forget` the secret `forget` days after discovering it. A person cannot share the secret on the same day they forgot it, or on any day afterwards.

Given an integer n, return the number of people who know the secret at the end of day n. Since the answer may be very large, return it modulo `10^9 + 7`
# Code
```
class Solution {
    public int peopleAwareOfSecret(int n, int delay, int forget) {
        long dp[] = new long[n + 1];
        long mod = (long) 1e9 + 7;
        long noPeople = 0;
        long ans = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            long newPeople = dp[Math.max(i - delay, 0)];
            long peopleForget = dp[Math.max(i - forget, 0)];
            noPeople += (newPeople - peopleForget + mod)% mod;
            dp[i] = noPeople;
        }
        for (int i = n - forget + 1; i <= n; i++) {
            ans = (ans + dp[i]) % mod;
        }
        return (int) ans;
    }
}
```