class Solution {
public:
    int xx[4]={0,-1,0,1};
    int yy[4]={-1,0,1,0};
    int n,m,w,G[55][55],vis[55][55];
    void dfs(int x,int y,int op){
        int i,tmpx,tmpy;
        if(vis[x][y]==1)
        return;
        vis[x][y]=1,G[x][y]=w;
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||G[tmpx][tmpy]!=op)
            continue;
            dfs(tmpx,tmpy,op);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int i,j;
        vector<int> tmp;
        n=image.size();
        m=image[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                G[i][j]=image[i][j];
            }
        }
        memset(vis,0,sizeof(vis));
        w=newColor;
        dfs(sr,sc,G[sr][sc]);
        image.clear();
        for(i=0;i<n;i++){
            tmp.clear();
            for(j=0;j<m;j++){
                tmp.push_back(G[i][j]);
            }
            image.push_back(tmp);   
        }
        return image;
    }
};
