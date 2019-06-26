class Solution {
public:
    vector<int> G[30];
    vector<int>::iterator ite;
    int numMatchingSubseq(string S, vector<string>& words) {
        int i,j,n,u,v,ans;
        n=S.size();
        for(i=0;i<n;i++)
        G[S[i]-'a'].push_back(i);
        for(i=0;i<26;i++)
        sort(G[i].begin(),G[i].end());
        ans=0;
        for(i=0;i<words.size();i++){
            v=-1;
            for(j=0;j<words[i].size();j++){
                u=words[i][j]-'a';
                ite=upper_bound(G[u].begin(),G[u].end(),v);
                if(ite==G[u].end())
                goto next;
                v=*ite;
            }
            ans++;
            next:;
        }
        return ans;
    }
};
