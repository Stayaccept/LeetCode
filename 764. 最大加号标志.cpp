static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();
class Solution {
public:
    int G[505][505],dp[505][505][4];
    int orderOfLargestPlusSign(int N, vector<vector<int>>& mines) {
        int i,j,k,u,v,ans;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                G[i][j]=1;
            }
        }
        for(i=0;i<mines.size();i++){
            u=mines[i][0];
            v=mines[i][1];
            G[u][v]=0;
        }
        for(i=0;i<N;i++){
            dp[i][0][0]=G[i][0];
            for(j=1;j<N;j++){
                if(G[i][j]==0)
                dp[i][j][0]=0;
                else
                dp[i][j][0]=dp[i][j-1][0]+1;
            }
            dp[i][N-1][1]=G[i][N-1];
            for(j=N-2;j>=0;j--){
                if(G[i][j]==0)
                dp[i][j][1]=0;
                else
                dp[i][j][1]=dp[i][j+1][1]+1;
            }
        }
        for(i=0;i<N;i++){
            dp[0][i][2]=G[0][i];
            for(j=1;j<N;j++){
                if(G[j][i]==0)
                dp[j][i][2]=0;
                else
                dp[j][i][2]=dp[j-1][i][2]+1;
            }
            dp[N-1][i][3]=G[N-1][i];
            for(j=N-2;j>=0;j--){
                if(G[j][i]==0)
                dp[j][i][3]=0;
                else
                dp[j][i][3]=dp[j+1][i][3]+1;
            }
        }
        ans=0;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                u=min(dp[i][j][0],dp[i][j][1]);
                v=min(dp[i][j][2],dp[i][j][3]);
                ans=max(ans,min(u,v));
            }
        }
        return ans;
    }
};
