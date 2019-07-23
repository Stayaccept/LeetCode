class Solution {
public:
    int dp[105][55][55];
    int cherryPickup(vector<vector<int>>& grid) {
        int i,j,k,n,u,x1,x2,y1,y2;
        n=grid.size();
        if(n==1)
        return grid[0][0];
        memset(dp,0,sizeof(dp));
        for(i=1;i<=2*n-2;i++){
            for(j=0;j<=n;j++){
                for(k=0;k<=n;k++){
                    dp[i][j][k]=-1;
                }
            }
        }
        dp[0][1][1]=grid[0][0];
        for(i=1;i<=2*n-2;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    x1=j,y1=1+i-(j-1);
                    x2=k,y2=1+i-(k-1);
                    if(y1<1||y1>n||y2<1||y2>n)
                    continue;
                    if(grid[x1-1][y1-1]==-1||grid[x2-1][y2-1]==-1)
                    continue;
                    if(x1==x2&&y1==y2)
                    u=grid[x1-1][y1-1];
                    else
                    u=grid[x1-1][y1-1]+grid[x2-1][y2-1];
                    if(dp[i-1][j][k]!=-1)
                    dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k]+u);
                    if(dp[i-1][j-1][k]!=-1)
                    dp[i][j][k]=max(dp[i][j][k],dp[i-1][j-1][k]+u);
                    if(dp[i-1][j][k-1]!=-1)
                    dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k-1]+u);
                    if(dp[i-1][j-1][k-1]!=-1)
                    dp[i][j][k]=max(dp[i][j][k],dp[i-1][j-1][k-1]+u);
                }
            }
        }
        if(dp[2*n-2][n][n]==-1)
        return 0;
        return dp[2*n-2][n][n];
    }
};
