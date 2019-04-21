class Solution {
public:
    long long INF=0x3f3f3f3f3f3f;   
    long long MOD=1e9+7;
    int nthMagicalNumber(int N, int A, int B) {
        long long u,v,l,r,mid,ans;
        l=1,r=INF;
        while(l<=r){
            mid=(l+r)/2;
            u=A/__gcd(A,B)*B;
            v=mid/A+mid/B-mid/u;
            if(v>=N){
                ans=mid%MOD;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
};
