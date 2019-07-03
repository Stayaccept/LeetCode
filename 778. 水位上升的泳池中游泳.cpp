class Solution {
public:
    int xx[4]={0,-1,0,1};
    int yy[4]={-1,0,1,0};
    int n,sig,G[55][55],vis[55][55];
    void dfs(int x,int y,int mid){
        int i,u,v;
        if(sig==1)
        return;
        if(x==n-1&&y==n-1){
            sig=1;
            return;
        }
        vis[x][y]=1;
        for(i=0;i<4;i++){
            u=x+xx[i];
            v=y+yy[i];
            if(u<0||u>=n||v<0||v>=n)
            continue;
            if(G[u][v]>mid||vis[u][v]==1)
            continue;
            dfs(u,v,mid);
        }
    }
    int swimInWater(vector<vector<int>>& grid) {
        int i,j,l,r,mid,ans;
        n=grid.size();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                G[i][j]=grid[i][j];
            }
        }
        l=0,r=2505;
        while(l<=r){
            mid=(l+r)/2;
            sig=0;
            memset(vis,0,sizeof(vis));
            if(G[0][0]<=mid)
            dfs(0,0,mid);
            if(sig==1){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
};
