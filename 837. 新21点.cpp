class Solution {
public:
    double dp[10005];
    double new21Game(int N, int K, int W) {
        int i,j;
        double sum,ans;
        if(K==0||N>=K+W)
        return 1;
        sum=ans=0;
        for(i=1;i<=N;i++){
            dp[i]=sum/W;
            if(i<=W)
            dp[i]+=1.0/W;
            if(i<=K-1)
            sum+=dp[i];
            if(i>W)
            sum-=dp[i-W];
        }
        for(i=K;i<=N;i++)
        ans+=dp[i];
        return ans;
    }
};
