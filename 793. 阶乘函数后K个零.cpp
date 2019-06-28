class Solution {
public:
    int cal(long long x){
        int ans=0;
        while(x){
            ans+=(x/5);
            x/=5;
        }
        return ans;
    }
    int preimageSizeFZF(int K) {
        long long l,r,mid,ans;
        l=0LL,r=5LL*K;
        while(l<=r){
            mid=(l+r)/2;
            if(cal(mid)>=K){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        if(cal(ans)==K)
        return 5;
        return 0;
    }
};
