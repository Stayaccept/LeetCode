class Solution {
public:
    long long ans;
    void dfs(long long s,int pre,int n){
        int i;
        if(s>1e9)
        return;
        if(s<=n)
        ans=max(ans,s);
        for(i=pre;i<10;i++)
        dfs(s*10+i,i,n);
    }
    int monotoneIncreasingDigits(int N) {
        int i;
        if(N<10)
        return N;
        ans=-1;
        for(i=1;i<10;i++)
        dfs(i,i,N);
        return ans;
    }
};
