class Solution {
public:
    int n,m,ans;
    int xx[4]={0,-1,0,1};
    int yy[4]={-1,0,1,0};
    int G[105][105],op[105][105],vis[105][105];
    struct node{
        int x,y,sum;
        friend bool operator<(node a,node b){
            return a.sum>b.sum;
        }
    };
    void dfs(int x,int y){
        int i,tmpx,tmpy;
        vis[x][y]=1;
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||vis[tmpx][tmpy]==1||G[tmpx][tmpy]==0)
            continue;
            dfs(tmpx,tmpy);
        }
    }
    int bfs(int x,int y){
        node tmp;
        int i,tmpx,tmpy;
        priority_queue<node> qu;
        qu.push((node){x,y,0});
        op[x][y]=1;
        while(qu.size()){
            tmp=qu.top();
            qu.pop();
            if(vis[tmp.x][tmp.y]==0&&G[tmp.x][tmp.y]==1)
            return tmp.sum;
            for(i=0;i<4;i++){
                tmpx=tmp.x+xx[i];
                tmpy=tmp.y+yy[i];
                if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||op[tmpx][tmpy]==1)
                continue;
                op[tmpx][tmpy]=1;
                if(vis[tmpx][tmpy]==1)
                qu.push((node){tmpx,tmpy,tmp.sum});
                else{
                    if(G[tmpx][tmpy]==1)
                    qu.push((node){tmpx,tmpy,tmp.sum});
                    else
                    qu.push((node){tmpx,tmpy,tmp.sum+1});
                }
            }
        }
        return -1;
    }
    int shortestBridge(vector<vector<int>>& A) {
        int i,j,x,y,ans;
        n=A.size();
        m=A[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                G[i][j]=A[i][j];
                if(A[i][j]==1)
                x=i,y=j;
            }
        }
        memset(vis,0,sizeof(vis));
        dfs(x,y);
        memset(op,0,sizeof(op));
        ans=bfs(x,y);
        return ans;
    }
};
