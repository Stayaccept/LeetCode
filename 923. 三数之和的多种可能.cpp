class Solution {
public:
    int threeSumMulti(vector<int>& A, int target) {
        int i,j,u,v;
        int MOD=1e9+7;
        int dp[305][5];
        map<int,int> mp;
        map<int,int>::iterator ite;
        mp.clear();
        for(i=0;i<A.size();i++)
        mp[A[i]]++;
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(ite=mp.begin();ite!=mp.end();ite++){
            u=ite->first;
            v=ite->second;
            for(i=1;i<=v;i++){
                for(j=target;j>=u;j--){
                    dp[j][3]=(dp[j][3]+dp[j-u][2])%MOD;
                    dp[j][2]=(dp[j][2]+dp[j-u][1])%MOD;
                    dp[j][1]=(dp[j][1]+dp[j-u][0])%MOD;
                }
            }
        }
        return dp[target][3];
    }
};
