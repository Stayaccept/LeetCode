class Solution {
public:
    int num[10005],vis[10005];
    queue<int> qu;
    vector<int> ans;
    vector<int> G[10005];
    vector<int> diStringMatch(string S) {
        int i,n,u,id;
        
        n=S.size();
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
        G[i].clear();
        for(i=0;i<n;i++){
            if(S[i]=='I'){
                G[i].push_back(i+1);
                vis[i+1]++;
            }
            else{
                G[i+1].push_back(i);
                vis[i]++;
            }
        }
        for(i=0;i<n+1;i++){
            if(vis[i]==0)
            qu.push(i);
        }
        id=0;
        while(qu.size()){
            u=qu.front();
            qu.pop();
            num[u]=id++;
            for(i=0;i<G[u].size();i++){
                vis[G[u][i]]--;
                if(vis[G[u][i]]==0)
                qu.push(G[u][i]);
            }
        }
        for(i=0;i<n+1;i++)
        ans.push_back(num[i]);
        return ans;
    }
};
