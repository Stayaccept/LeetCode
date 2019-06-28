class Solution {
public:
    int vis[20005];
    int bestRotation(vector<int>& A) {
        int i,n,u,v,ans;
        n=A.size();
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++){
            if(A[i]>=n)
            continue;
            else if(A[i]<=i){
                vis[0]++;
                vis[i-A[i]+1]--;
                vis[i+1]++;
                vis[n]--;
            }
            else{
                vis[i+1]++;
                vis[i+n-A[i]+1]--;
            }
        }
        u=v=ans=0;
        for(i=0;i<=n;i++){
            u+=vis[i];
            if(u>v){
                v=u;
                ans=i;
            }
        }
        return ans;
    }
};
