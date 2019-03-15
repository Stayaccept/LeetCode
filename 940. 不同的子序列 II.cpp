class Solution {
public:
    int distinctSubseqII(string S) {
        int dp[30];
        int i,j,ans,tmp;
        int MOD=1e9+7;
        memset(dp,0,sizeof(dp));
        for(i=0;i<S.size();i++){
            tmp=0;
            for(j=0;j<26;j++)
            tmp=(tmp+dp[j])%MOD;
            dp[S[i]-'a']=(tmp+1)%MOD;
        }
        ans=0;
        for(i=0;i<26;i++)
        ans=(ans+dp[i])%MOD;
        return ans;
    }
};
