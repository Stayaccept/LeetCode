class Solution {
public:
    int dp[505][505];
    int minDistance(string word1, string word2) {
        int i,j,n,m;
        n=word1.size();
        m=word2.size();
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1])
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return n+m-2*dp[n][m];
    }
};
