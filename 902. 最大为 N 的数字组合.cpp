class Solution {
public:
    int a[15],vis[15],dp[15][15];
    int dfs(int pos,int pre,int lim,int op){
        int i,u;
        int ans=0;
        if(pos==0){
            // cout<<sum<<"das"<<endl;
            return 1;
        }
        if(dp[pos][pre]!=-1&&lim==0)
        return dp[pos][pre];
        u=lim?a[pos]:9;
        for(i=0;i<=u;i++){
            if((i!=0&&vis[i]==0)||(i==0&&op==0))
            continue;                               
            if(i==0&&op==1)
            ans+=dfs(pos-1,i,lim&(i==u),1);
            else
            ans+=dfs(pos-1,i,lim&(i==u),0);
        }
        if(lim==0)
        dp[pos][pre]=ans;
        return ans;
    }
    int cal(int x){
        int pos=0;
        while(x){
            a[++pos]=x%10;
            x/=10;
        }
        return dfs(pos,0,1,1);
    }
    int atMostNGivenDigitSet(vector<string>& D, int N) {
        int i;
        memset(dp,-1,sizeof(dp));
        memset(vis,0,sizeof(vis));
        for(i=0;i<D.size();i++)
        vis[D[i][0]-'0']=1;
        return cal(N)-1;
    }
};
