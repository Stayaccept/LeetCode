class Solution {
public:
    bool isMatch(string s,string p) {
        int i,j,slen,plen;
        int dp[105][105];
        memset(dp,0,sizeof(dp));
        slen=s.size();
        plen=p.size();
        dp[0][0]=1;
        for(i=2;i<=plen;i++)
        if(p[i-1]=='*')
        dp[0][i]=dp[0][i-2];
        for(i=1;i<=slen;i++){
            for(j=1;j<=plen;j++){
                if(s[i-1]==p[j-1]||p[j-1]=='.')
                dp[i][j]=dp[i-1][j-1];
                else if(p[j-1]=='*'){
                    if(j>=2){
                        dp[i][j]=dp[i][j-2];
                        if(p[j-2]=='.'||p[j-2]==s[i-1]){
                            dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
                            dp[i][j]=max(dp[i][j],dp[i-1][j]);
                        }
                    }
                }
            }
        }
        return dp[slen][plen];
    }
};
