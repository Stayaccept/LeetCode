class Solution {
public:
    int dp[505][505];
    int INF=0x3f3f3f3f;
    bool stoneGame(vector<int>& piles) {
        int i,j,l,n;
        n=piles.size();
        for(i=0;i<n;i++)
        dp[i+1][i+1]=piles[i];
        for(l=2;l<=n;l++){
            for(i=1;i+l-1<=n;i++){
                j=i+l-1;
                dp[i][j]=max(piles[i-1]-dp[i+1][j],piles[j-1]-dp[i][j-1]);
            }
        }
        if(dp[n][n]>0)
        return 1;
        return 0;
    }
};
