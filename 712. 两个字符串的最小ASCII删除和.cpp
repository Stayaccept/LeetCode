class Solution {
public:
    int dp[1005][1005];
    int minimumDeleteSum(string s1, string s2) {
        int i,j,n,m,ans;
        n=s1.size();
        m=s2.size();
        ans=0;
        for(i=0;i<n;i++)
        ans+=(int)s1[i];
        for(i=0;i<m;i++)
        ans+=(int)s2[i];
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+(int)s1[i-1]);
                else
                dp[i][j]=max(dp[i][j],max(dp[i][j-1],dp[i-1][j]));
            }
        }
        return ans-dp[n][m]*2;
    }
};
