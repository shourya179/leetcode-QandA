class Solution {
public:
    int climbStairs(int n, vector<int>& dp) {
         int cnt = 0;
        cnt++;

        if (n == 1 || n == 2)
            return n;

        if (dp[n] != -1)
            return dp[n];

       return  dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);
        
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return climbStairs(n, dp);
    }
    
};