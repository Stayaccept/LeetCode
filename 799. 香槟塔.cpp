class Solution {
public:
    double dp[105][105];
    double champagneTower(int poured, int query_row, int query_glass) {
        int i,j;
        memset(dp,0,sizeof(dp));
        dp[0][0]=poured;
        for(i=0;i<=query_row;i++){
            for(j=0;j<=query_glass;j++){
                if(dp[i][j]>1){
                    dp[i+1][j]+=(dp[i][j]-1)/2;
                    dp[i+1][j+1]+=(dp[i][j]-1)/2;
                }
            }
        }
        return min(1.0,dp[query_row][query_glass]);
    }
};
