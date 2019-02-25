class Solution {
public:
    int xx[5]={-1,0,0,1};
    int yy[5]={0,-1,1,0};
    int n,m,u,v,uu,vv,ans,num;
    int S[25][25],vis[25][25];
    void dfs(int x,int y,int sum){
        int i,tmpx,tmpy;
        if(x==uu&&y==vv&&sum==num){
            ans++;
            return;
        }
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m
               ||vis[tmpx][tmpy]==1||S[tmpx][tmpy]==-1)
            continue;
            vis[tmpx][tmpy]=1;
            dfs(tmpx,tmpy,sum+1);
            vis[tmpx][tmpy]=0;
        }
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int i,j;
        n=grid.size();
        m=grid[0].size();
        num=0;
        for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            S[i][j]=grid[i][j];
            if(S[i][j]==1)
            u=i,v=j;
            else if(S[i][j]==2)
            uu=i,vv=j;
            else if(S[i][j]==0)
            num++;
        }
        ans=0;
        num+=2;
        memset(vis,0,sizeof(vis));
        vis[u][v]=1;
        dfs(u,v,1);
        return ans;
    }
};
