class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,u,n,ans;
        n=a.size();
        if(n==0)
        return 0;
        u=a[0],ans=0;
        for(i=1;i<n;i++){
            if(a[i]>u)
            ans=max(ans,a[i]-u);
            u=min(u,a[i]);
        }
        return ans;
    }
};
