class Solution {
public:
    typedef long long ll;
    ll mm,nn;
    ll mod=1e9+7;
    ll dp[55][55][55];
    ll xx[4]={0,-1,0,1};
    ll yy[4]={-1,0,1,0};
    ll dfs(ll x,ll y,ll sum){
        ll i,ans,tmpx,tmpy;
        if(x<0||x>=mm||y<0||y>=nn)
        return 1;
        if(sum==0){
            if(x<0||x>=mm||y<0||y>=nn)
            return 1;
            return 0;
        }
        if(dp[x][y][sum]!=-1)
        return dp[x][y][sum];
        ans=0;
        for(i=0;i<4;i++){
            tmpx=x+xx[i];
            tmpy=y+yy[i];
            ans=(ans+dfs(tmpx,tmpy,sum-1))%mod;
        }
        return dp[x][y][sum]=ans;
    }
    int findPaths(int m, int n, int N, int i, int j) {
        mm=m,nn=n;
        memset(dp,-1,sizeof(dp));
        return dfs(i,j,N);
    }
};
