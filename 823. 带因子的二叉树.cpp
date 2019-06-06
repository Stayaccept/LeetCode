class Solution {
public:
    long long dp[1005];
    long long MOD=1e9+7;
    map<int,int> mp;
    int numFactoredBinaryTrees(vector<int>& A) {
        int i,j,n,u;
        long long ans;
        n=A.size();
        mp.clear();
        sort(A.begin(),A.end());
        for(i=0;i<A.size();i++){
            dp[i]=1;
            mp[A[i]]=i+1;
        }
        for(i=0;i<A.size();i++){
            for(j=0;j<i;j++){
                if(A[i]%A[j]!=0)
                continue;
                u=A[i]/A[j];
                if(mp[u]==0)
                continue;
                if(u==A[j])
                dp[i]=(dp[i]+dp[mp[u]-1]*dp[mp[u]-1]%MOD)%MOD;
                else
                dp[i]=(dp[i]+dp[mp[u]-1]*dp[j]%MOD)%MOD;
            }
        }
        ans=0;
        for(i=0;i<A.size();i++)
        ans=(ans+dp[i])%MOD;
        return ans;
    }   
};
