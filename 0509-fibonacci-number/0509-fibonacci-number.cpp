class Solution {
public:
    // int fibonacci(int n,vector<int>&dp){
    //     if(n<=1)return n;
    //     if(dp[n]!=-1)return dp[n];
    //     return dp[n]= fibonacci(n-1,dp)+fibonacci(n-2,dp);

    // }
    int fib(int n) {
        if(n<=1)return n;
        if(n==2)return 1;
        vector<int>dp(3);
        //base case fill in bottom up approch 
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3; i<=n; i++){
            // spcae optimization
            dp[0]=dp[1];
            dp[1]=dp[2];
            dp[2]=dp[0]+dp[1];
           
        }
         return dp[2];
    }
};