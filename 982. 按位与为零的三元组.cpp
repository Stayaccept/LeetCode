class Solution {
public:
    int countTriplets(vector<int>& A){
        int i,j,u,ans;
        int vis[100000];
        memset(vis,0,sizeof(vis));
        for(i=0;i<A.size();i++){
            for(j=0;j<A.size();j++){
                vis[A[i]&A[j]]++;
            }
        }
        ans=0;
        for(i=0;i<A.size();i++){
            for(j=0;j<(1<<16);j++){
                if((A[i]&j)==0)
                ans+=vis[j];
            }
        }
        return ans;
    }
};
