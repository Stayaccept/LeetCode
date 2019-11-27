class Solution {
public:
    int dp[5005];
    int change(int amount, vector<int>& coins) {
        int i,j,u;
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(i=0;i<coins.size();i++){
            u=coins[i];
            for(j=u;j<=amount;j++)
            dp[j]+=dp[j-u];
        }
        return dp[amount];
    }
};
