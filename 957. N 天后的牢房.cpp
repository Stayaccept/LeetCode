class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        int i,j,sig;
        vector<int> G[20];
        G[0].clear();
        for(i=0;i<8;i++)
        G[0].push_back(cells[i]);
        for(i=1;i<=15;i++){
            G[i].clear();
            G[i].push_back(0);
            for(j=1;j<=6;j++){
                if(G[i-1][j-1]!=G[i-1][j+1])
                G[i].push_back(0);
                else
                G[i].push_back(1);
            }
            G[i].push_back(0);
        }
        if(N%14==0)
        return G[14];
        return G[N%14];
    }
};
