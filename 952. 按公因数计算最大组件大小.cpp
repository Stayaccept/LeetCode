class Solution {
public:
    int fa[20005];
    int get(int x){
        if(x!=fa[x])
        fa[x]=get(fa[x]);
        return fa[x];
    }
    void unite(int x,int y){
        x=get(x);
        y=get(y);
        if(x==y)
        return;
        fa[x]=y;
    }
    int same(int x,int y){
        return get(x)==get(y);
    } 
    int largestComponentSize(vector<int>& A) {
        int vis[20005];
        int i,j,n,u,ans;
        map<int,vector<int> > mp;
        map<int,vector<int> >::iterator ite;
        n=A.size();
        for(i=1;i<=n;i++)
        fa[i]=i;
        for(i=0;i<n;i++){
            u=A[i];
            mp[u].push_back(i+1);
            for(j=2;j*j<=u;j++){
                if(u%j==0){
                    mp[j].push_back(i+1);
                    if(j!=u/j)
                    mp[u/j].push_back(i+1);
                }
            }
        }
        for(ite=mp.begin();ite!=mp.end();ite++){
            for(j=1;j<(ite->second).size();j++){
                unite((ite->second)[j],(ite->second)[j-1]);
            }
        }
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
        vis[get(i+1)]++;
        ans=0;
        for(i=1;i<=n;i++)
        ans=max(ans,vis[i]);
        return ans;
    }
};
