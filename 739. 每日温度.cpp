class Solution {
public:
    int dp[105];
    vector<int> dailyTemperatures(vector<int>& T) {
        int i,j,n,u;
        int INF=0x3f3f3f3f;
        vector<int> ans;
        memset(dp,0,sizeof(dp));
        n=T.size();
        ans.clear();
        for(i=n-1;i>=0;i--){
            u=INF;
            for(j=T[i]+1;j<=100;j++){
                if(dp[j]-1>i)
                u=min(u,dp[j]-1-i);
            }
            if(u==INF)
            ans.push_back(0);
            else
            ans.push_back(u);
            dp[T[i]]=i+1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
