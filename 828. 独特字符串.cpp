class Solution {
public:
    vector<int> G[30];
    int uniqueLetterString(string S) {
        int i,j,n,u,v;
        long long ans,MOD=1e9+7;
        n=S.size();
        for(i=0;i<26;i++)
        G[i].push_back(-1);
        for(i=0;i<n;i++)
        G[S[i]-'A'].push_back(i);
        for(i=0;i<26;i++)
        G[i].push_back(n);
        ans=0;
        for(i=0;i<26;i++){
            for(j=1;j+1<G[i].size();j++){
                u=G[i][j-1];
                v=G[i][j+1];
                ans=(ans+(G[i][j]-u)*(v-G[i][j]))%MOD;
            }
        }
        return ans;
    }
};
