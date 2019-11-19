class Solution {
public:
    int n,ans;
    int vis[20];
    void dfs(int pos){
        int i;
        if(pos>n){
            ans++;
            return;
        }
        for(i=1;i<=n;i++){
            if(vis[i]!=0)
            continue;
            if(i%pos==0||pos%i==0){
                vis[i]=1;
                dfs(pos+1);
                vis[i]=0;
            }
        }
    }
    int countArrangement(int N) {
        n=N,ans=0;
        memset(vis,0,sizeof(vis));
        dfs(1);
        return ans;
    }
};
