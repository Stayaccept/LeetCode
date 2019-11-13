class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int i,j,n,m;
        int INF=0x3f3f3f3f;
        vector<int> tmp;
        vector<vector<int>> ans;
        n=matrix.size();
        m=matrix[0].size();
        int dp[n][m];
        memset(dp,INF,sizeof(dp));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(matrix[i][j]==0)
                dp[i][j]=0;
                else{
                    if(i-1>=0)
                    dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                    if(j-1>=0)
                    dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                }
            }
        }
        for(i=n-1;i>=0;i--){
            for(j=m-1;j>=0;j--){
                if(matrix[i][j]==0)
                dp[i][j]=0;
                else{
                    if(i+1<n)
                    dp[i][j]=min(dp[i][j],dp[i+1][j]+1);
                    if(j+1<m)
                    dp[i][j]=min(dp[i][j],dp[i][j+1]+1);
                }
            }
        }
        ans.clear();
        for(i=0;i<n;i++){
            tmp.clear();
            for(j=0;j<m;j++)
            tmp.push_back(dp[i][j]);
            ans.push_back(tmp);
        }
        return ans;
    }
};
