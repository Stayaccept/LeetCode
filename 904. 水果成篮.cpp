class Solution {
public:
    int vis[40005];
    int totalFruit(vector<int>& tree) {
        int i,u,v,n,ans,tmp;
        n=tree.size();
        u=v=ans=tmp=0;
        memset(vis,0,sizeof(vis));
        while(u<n){
            if(vis[tree[u]]==0){
                tmp++;
                vis[tree[u]]++;
                if(tmp<=2)
                ans=max(ans,u-v+1);
                else{
                    while(tmp>2){
                        vis[tree[v]]--;
                        if(vis[tree[v]]==0)
                        tmp--;
                        v++;
                    }
                }
                u++;
            }
            else{
                vis[tree[u]]++;
                ans=max(ans,u-v+1);
                u++;
            }
        }
        return ans;
    }
};
