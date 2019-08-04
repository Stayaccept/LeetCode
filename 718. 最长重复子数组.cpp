class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int i,j,n,m,ans;
        int dp[1005][1005];
        n=A.size();
        m=B.size();
        ans=0;
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
