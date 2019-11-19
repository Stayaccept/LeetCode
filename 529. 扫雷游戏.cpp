class Solution {
public:
    typedef pair<int,int> P;
    int n,m;
    int xx[8]={0,-1,-1,-1,0,1,1,1};
    int yy[8]={-1,-1,0,1,1,1,0,-1};
    int judge(int x,int y){
        if(x<0||x>=n||y<0||y>=m)
        return 0;
        return 1;
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        P p;
        queue<P> qu;
        int i,j,u,v,tmp,tmpx,tmpy;
        n=board.size();
        m=board[0].size();
        u=click[0],v=click[1];
        if(board[u][v]=='M'){
            board[u][v]='X';
        }
        else{
            tmp=0;
            for(i=0;i<8;i++){
                tmpx=u+xx[i];
                tmpy=v+yy[i];
                if(judge(tmpx,tmpy)==0)
                continue;
                if(board[tmpx][tmpy]=='M'||board[tmpx][tmpy]=='X')
                tmp++;
            }
            if(tmp==0){
                board[u][v]='B';
                qu.push(make_pair(u,v));
            }
            else
            board[u][v]=tmp+'0';
            while(qu.size()){
                p=qu.front();
                qu.pop();
                for(i=0;i<8;i++){
                    u=p.first+xx[i];
                    v=p.second+yy[i];
                    if(judge(u,v)==0||board[u][v]!='E')
                    continue;
                    tmp=0;
                    for(j=0;j<8;j++){
                        tmpx=u+xx[j];
                        tmpy=v+yy[j];
                        if(judge(tmpx,tmpy)==0)
                        continue;
                        if(board[tmpx][tmpy]=='M'||board[tmpx][tmpy]=='X')
                        tmp++;
                    }
                    if(tmp==0){
                        board[u][v]='B';
                        qu.push(make_pair(u,v));
                    }
                    else
                    board[u][v]=tmp+'0';
                }
            }
        }
        return board;
    }
};
