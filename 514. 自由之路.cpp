class Solution {
public:
    int dp[105][105];
    map<char,vector<int> > mp;
    map<char,vector<int> >::iterator ite;
    int findRotateSteps(string ring, string key) {
        int i,j,k,u,n,m,ans;
        int INF=0x3f3f3f3f;
        vector<int> G;
        mp.clear();
        n=ring.size();
        for(i=0;i<n;i++)
        mp[ring[i]].push_back(i);
        memset(dp,INF,sizeof(dp));
        G=mp[key[0]];
        for(i=0;i<G.size();i++){
            u=G[i];
            dp[0][u]=min(dp[0][u],min(u,n-u)+1);
        }
        m=key.size();
        for(i=1;i<m;i++){
            G=mp[key[i]];
            for(j=0;j<G.size();j++){
                u=G[j];
                for(k=0;k<n;k++){
                    if(dp[i-1][k]>=INF)
                    continue;
                    dp[i][u]=min(dp[i][u],dp[i-1][k]+min(abs(u-k),abs(n-abs(u-k)))+1);
                }
            }
        }
        ans=INF,G=mp[key[m-1]];
        for(i=0;i<G.size();i++)
        ans=min(ans,dp[m-1][G[i]]);
        return ans;
    }
};
