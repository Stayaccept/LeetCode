/*
 * @lc app=leetcode.cn id=675 lang=cpp
 *
 * [675] 为高尔夫比赛砍树
 */
class Solution {
public:
    struct node{
        int x,y,w,step;
        friend bool operator<(node a,node b){
            return a.w>b.w;
        }
    };
    int n,m;
    int xx[4]={0,-1,0,1};
    int yy[4]={-1,0,1,0};
    vector<vector<int>> G;
    priority_queue<node> qu;
    int bfs(node st,node en){
        int i,tmpx,tmpy;
        node u;
        queue<node> q;
        int vis[55][55];
        memset(vis,0,sizeof(vis));
        q.push(st);
        vis[st.x][st.y]=1;
        while(q.size()){
            u=q.front();
            if(u.x==en.x&&u.y==en.y)
            return u.step;
            q.pop();
            for(i=0;i<4;i++){
                tmpx=u.x+xx[i];
                tmpy=u.y+yy[i];
                if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||G[tmpx][tmpy]==0||vis[tmpx][tmpy]==1)
                continue;
                vis[tmpx][tmpy]=1;
                q.push((node){tmpx,tmpy,0,u.step+1});
            }
        }
        return -1;
    }
    int cutOffTree(vector<vector<int>>& forest) {
        int i,j,op,ans;
        node u,tmp;
        G=forest;
        n=forest.size();
        m=forest[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(forest[i][j]>1)
                qu.push((node){i,j,forest[i][j],0});
            }
        }
        ans=0;
        tmp=(node){0,0,0,0};
        while(qu.size()){
            u=qu.top();
            qu.pop();
            op=bfs(tmp,u);
            G[u.x][u.y]=1;
            if(op==-1)
            return -1;
            ans+=op;
            tmp=u;
            
        }
        return ans;
    }
};

