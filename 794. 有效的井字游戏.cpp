class Solution {
public:
    int sig;
    char c[5][5],s[5][5];
    set<char> se;
    void dfs(int op){
        int i,j,u;
        u=0;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(c[i][j]!=s[i][j]){
                    u=1;
                    goto next;
                }
            }
        }
        next:;
        if(u==0)
        sig=1;
        if(op==9||sig==1)
        return;
        if((c[0][0]==c[1][1]&&c[1][1]==c[2][2]&&c[0][0]!=' ')||
           (c[0][2]==c[1][1]&&c[1][1]==c[2][0]&&c[0][2]!=' ')||
           (c[0][0]==c[0][1]&&c[0][1]==c[0][2]&&c[0][0]!=' ')||
           (c[1][0]==c[1][1]&&c[1][1]==c[1][2]&&c[1][0]!=' ')||
           (c[2][0]==c[2][1]&&c[2][1]==c[2][2]&&c[2][0]!=' ')||
           (c[0][0]==c[1][0]&&c[1][0]==c[2][0]&&c[0][0]!=' ')||
           (c[0][1]==c[1][1]&&c[1][1]==c[2][1]&&c[0][1]!=' ')||
           (c[0][2]==c[1][2]&&c[1][2]==c[2][2]&&c[0][2]!=' '))
        return;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(c[i][j]==' '){
                    if(op%2==0)
                    c[i][j]='X';
                    else
                    c[i][j]='O';
                    dfs(op+1);
                    c[i][j]=' ';
                }
            }
        }
    }
    bool validTicTacToe(vector<string>& board) {
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                c[i][j]=' ';
                s[i][j]=board[i][j];
            }
        }
        sig=0;
        dfs(0);
        return sig;
    }
};
