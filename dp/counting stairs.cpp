class Solution {
public:

// also a way to do it with iterative dp
    // int climbStairs(int n)  {
    // if (n==0 || n==1){
    //     return 1;
    // }
    // vector <int> dp(n+1);
    // dp[0] = dp[1] = 1;
    // for (int i =2; i<=n; i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    // }
    // return dp[n];

// recusive solution with memoization 

 int ClimbStairs(int n, vector<int>& dp) {
        if (n <= 1) return 1;
        if (dp[n] != -1) return dp[n];
        dp[n] = ClimbStairs(n-1, dp) + ClimbStairs(n-2, dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return ClimbStairs(n, dp);
    }
};
