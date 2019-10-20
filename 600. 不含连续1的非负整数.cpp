class Solution {
public:
    int a[105],dp[105][2];
    int dfs(int pos,int pre,int lim){
        int i,u,ans=0;
        if(pos==0)
        return 1;
        if(lim==0&&dp[pos][pre]!=-1)
        return dp[pos][pre];
        u=lim?a[pos]:1;
        for(i=0;i<=u;i++){
            if(pre==1&&i==1)
            continue;
            ans+=dfs(pos-1,i,lim&(i==u));
        }
        if(lim==0)
        dp[pos][pre]=ans;
        return ans;
    }
    int findIntegers(int num) {
        int pos=0;
        while(num){
            a[++pos]=num%2;
            num/=2;
        }
        memset(dp,-1,sizeof(dp));
        return dfs(pos,-1,1);
    }
};
