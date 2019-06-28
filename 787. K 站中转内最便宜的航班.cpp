class Solution {
public:
    int K,T,ans;
    int INF=0x3f3f3f3f;
    struct node{
        int v,val;
    };
    vector<node> G[105];
    void dfs(int S,int op,int sum){
        int i,u,v;
        if(sum>ans||op>K+1)
        return;
        if(S==T){
            ans=min(ans,sum);
            return;
        }
        for(i=0;i<G[S].size();i++){
            u=G[S][i].v;
            v=G[S][i].val;
            dfs(u,op+1,sum+v);
        }
    } 
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int i,j,u,v,w;
        n=flights.size();
        for(i=0;i<n;i++){
            u=flights[i][0];
            v=flights[i][1];
            w=flights[i][2];
            G[u].push_back((node){v,w});
        }
        K=k,T=dst,ans=INF;
        dfs(src,0,0);
        if(ans>=INF)
        return -1;
        return ans;
    }
};
