class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int i,ans,sum;
        int vis[10005];
        ans=sum=0;
        memset(vis,0,sizeof(vis));
        for(i=0;i<A.size();i++){
            sum+=A[i];
            vis[(sum%K+K)%K]++;
        }
        ans+=vis[0];
        for(i=0;i<K;i++)
        ans+=(vis[i]*(vis[i]-1)/2);
        return ans;
    }
};
