class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        set<int> se;
        int i,j,n,m,p,q,u,v,ans;
        n=grid.size();
        m=grid[0].size();
        ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i+2>=n||j+2>=m)
                break;
                se.clear();
                for(p=0;p<=2;p++)
                for(q=0;q<=2;q++)
                se.insert(grid[i+p][j+q]);
                if(se.size()!=9||(*se.begin()!=1)||(*se.rbegin()!=9))
                continue;
                se.clear();
                for(p=0;p<=2;p++){
                    u=v=0;
                    for(q=0;q<=2;q++){
                        u+=grid[i+p][j+q];
                        v+=grid[i+q][j+p];
                    }
                    se.insert(u);
                    se.insert(v);
                }
                se.insert(grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2]);
                se.insert(grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j]);
                if(se.size()!=1||(*se.begin()!=15))
                continue;
                ans++;
            }
        }
        return ans;
    }
};
