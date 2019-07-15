class Solution {
public:
    int dp[1005];
    int minCostClimbingStairs(vector<int>& cost) {
        int i,n;
        n=cost.size();
        dp[0]=0,dp[1]=cost[0];
        for(i=2;i<=n;i++)
        dp[i]=min(dp[i-1],dp[i-2])+cost[i-1];
        return min(dp[n],dp[n-1]);
    }
};
