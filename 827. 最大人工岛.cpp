class Solution {
public:
    int xx[4]={0,-1,0,1};
    int yy[4]={-1,0,1,0};
    int tmp,n,m,a[2505],G[55][55],vis[55][55];
    void dfs(int x,int y,int id){
        int i,j,tmpx,tmpy;
        tmp++;
        vis[x][y]=id;
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||G[tmpx][tmpy]==0||vis[tmpx][tmpy]!=0)
            continue;
            dfs(tmpx,tmpy,id);
        }
    }
    int largestIsland(vector<vector<int>>& grid) {
        set<int> se;
        set<int>::iterator ite;
        int i,j,k,id,ans,tmpx,tmpy;
        n=grid.size();
        m=grid[0].size();
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        G[i][j]=grid[i][j];
        id=1,ans=0;
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(G[i][j]==1&&vis[i][j]==0){
                    tmp=0;
                    dfs(i,j,id);
                    a[id++]=tmp;
                    ans=max(ans,tmp);
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(G[i][j]==0){
                    se.clear();
                    for(k=0;k<4;k++){
                        tmpx=i+xx[k];
                        tmpy=j+yy[k];
                        if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||G[tmpx][tmpy]==0)
                        continue;
                        se.insert(vis[tmpx][tmpy]);
                    }
                    tmp=0;
                    for(ite=se.begin();ite!=se.end();ite++)
                    tmp+=(a[*ite]);
                    ans=max(ans,tmp+1);
                }
            }
        }
        return ans;
    }
};
