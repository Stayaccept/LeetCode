class Solution {
public:
    int dp[50005][2];
    int maxProfit(vector<int>& prices, int fee) {
        int i,u,v,n,ans;
        n=prices.size();
        dp[0][0]=0,dp[0][1]=-prices[0];
        for(i=1;i<n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]+prices[i]-fee);
            dp[i][1]=max(dp[i-1][0]-prices[i],dp[i-1][1]);
        }
        return dp[n-1][0];
    }
};
