class Solution {
public:
    int n,m,ans=0;
    int xx[4]={-1,0,1,0};
    int yy[4]={0,-1,0,1};
    int vis[1005][1005];
    string s;
    vector<vector<char>> G;
    void dfs(int x,int y,int pos){
        int i,tmpx,tmpy;
        if(ans==1||pos==s.size()){
            ans=1;
            return;
        }
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m||vis[tmpx][tmpy]==1||G[tmpx][tmpy]!=s[pos])
            continue;
            vis[tmpx][tmpy]=1;
            dfs(tmpx,tmpy,pos+1);
            vis[tmpx][tmpy]=0;
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        int i,j;
        G=board,s=word;
        n=board.size();
        m=board[0].size();
        if(word.size()==0)
        return 0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(G[i][j]!=word[0])
                continue;
                if(ans==1)
                goto next;
                memset(vis,0,sizeof(vis));
                vis[i][j]=1;
                dfs(i,j,1);
            }
        }
        next:;
        return ans;
    }
};
