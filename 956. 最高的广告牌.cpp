class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        int i,j,n;
        int dp[25][5005];
        n=rods.size();
        if(n==0)
        return 0;
        memset(dp,-1,sizeof(dp));
        dp[0][0]=0;
        dp[0][rods[0]]=rods[0];
        for(i=1;i<n;i++){
            for(j=0;j<5000;j++){
                if(dp[i-1][j]==-1)
                continue;
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
                dp[i][j+rods[i]]=max(dp[i][j+rods[i]],dp[i-1][j]+rods[i]);
                if(j<rods[i])
                dp[i][rods[i]-j]=max(dp[i][rods[i]-j],dp[i-1][j]-j+rods[i]);
                else
                dp[i][j-rods[i]]=max(dp[i][j-rods[i]],dp[i-1][j]);
            }
        }
        if(dp[n-1][0]==-1)
        return 0;
        return dp[n-1][0];
    }
};
