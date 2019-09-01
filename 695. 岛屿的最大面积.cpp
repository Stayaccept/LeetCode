class Solution {
public:
    int xx[4]={0,-1,0,1};
    int yy[4]={-1,0,1,0};
    int n,m,tmp;
    vector<vector<int>> G;
    void dfs(int x,int y){
        int i,tmpx,tmpy;
        tmp++;
        G[x][y]=0;
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||G[tmpx][tmpy]==0)
            continue;
            dfs(tmpx,tmpy);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid){
        int i,j,ans;
        G=grid;
        n=G.size();
        m=G[0].size();
        ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(G[i][j]==1){
                    tmp=0;
                    dfs(i,j);
                    ans=max(ans,tmp);
                }
            }
        }
        return ans;
    }
};
