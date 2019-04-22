static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();
class Solution {
public:
    int dp[1005][1005];
    unordered_map<int,int> mp;
    int lenLongestFibSubseq(vector<int>& A) {
        int u,n,i,j,ans;
        mp.clear();
        n=A.size();
        for(i=0;i<n;i++)
        mp[A[i]]=i+1;
        ans=0;
        for(i=0;i<n;i++)
        for(j=0;j<i;j++)
        dp[i][j]=2;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(A[i]-A[j]<A[j]&&mp[A[i]-A[j]]!=0){
                    dp[i][j]=max(dp[i][j],dp[j][mp[A[i]-A[j]]-1]+1);
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        if(ans<3)
        ans=0;
        return ans;
    }
};
