class Solution {
public:
    int xx[4]={-1,0,1,0};
    int yy[4]={0,1,0,-1};
    int vis[35][35][1<<6];
    struct node{
        int x,y,sta,sum;
        friend bool operator<(node a,node b){
            return a.sum>b.sum;
        }
    };
    priority_queue<node> qu;
    int shortestPathAllKeys(vector<string>& grid) {
        node tmp;
        int i,j,n,m,x,y,u,v,ans,tmpx,tmpy;
        n=grid.size();
        m=grid[0].size();
        v=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]=='@')
                x=i,y=j;
                if(grid[i][j]>='a'&&grid[i][j]<='z')
                v=max(v,grid[i][j]-'a');
            }
        }
        v++,ans=-1;
        memset(vis,0,sizeof(vis));
        qu.push((node){x,y,0,0});
        vis[x][y][0]=1;
        while(qu.size()){
            tmp=qu.top();
            qu.pop();
            if(tmp.sta==((1<<v)-1))
            return tmp.sum;
            for(i=0;i<4;i++){
                tmpx=tmp.x+xx[i];
                tmpy=tmp.y+yy[i];
                if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m)
                continue;
                if(grid[tmpx][tmpy]=='#')
                continue;
                else if(grid[tmpx][tmpy]=='.'||grid[tmpx][tmpy]=='@'){
                    if(vis[tmpx][tmpy][tmp.sta]==1)
                    continue;
                    vis[tmpx][tmpy][tmp.sta]=1;
                    qu.push((node){tmpx,tmpy,tmp.sta,tmp.sum+1});
                }
                else if(grid[tmpx][tmpy]>='a'&&grid[tmpx][tmpy]<='f'){
                    u=tmp.sta|(1<<(grid[tmpx][tmpy]-'a'));
                    if(vis[tmpx][tmpy][u]==1)
                    continue;
                    vis[tmpx][tmpy][u]=1;
                    qu.push((node){tmpx,tmpy,u,tmp.sum+1});
                }
                else{
                    u=grid[tmpx][tmpy]-'A';
                    if(((tmp.sta&(1<<u))==0)||(vis[tmpx][tmpy][tmp.sta]==1))
                    continue;
                    vis[tmpx][tmpy][tmp.sta]=1;
                    qu.push((node){tmpx,tmpy,tmp.sta,tmp.sum+1});
                }
            }
        }
        return ans;
    }
};
