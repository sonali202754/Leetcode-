class Solution {
public:
//    int mincost(vector<int>& cost,int n,vector<int>&dp){
//     if(n<=1)return 0;
//     if(dp[n]!=-1)return dp[n];
//     return dp[n]=min(mincost(cost,n-1,dp)+cost[n-1],mincost(cost,n-2,dp)+cost[n-2]);
//    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // vector<int>dp(n+1,-1); // use bottom up approch
       
        vector<int>dp(3);
        dp[0]=0;
        dp[1]=0;
        dp[2]=min(cost[0],cost[1]);
        for(int i=3; i<=n;i++){
            // dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
            //space optimization
           dp[0]=dp[1];
           dp[1]=dp[2];
           dp[2]=min(dp[0]+cost[i-2],dp[1]+cost[i-1]);
        }
        return dp[2];
    }
};