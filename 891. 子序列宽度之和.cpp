class Solution {
public:
    long long MOD=1e9+7;
    long long cal(long long n){
        long long a,b;
        a=2,b=1;
        while(n){
            if(n&1)
            b=(b*a)%MOD;
            n>>=1;
            a=(a*a)%MOD;
        }
        return b;
    }
    int sumSubseqWidths(vector<int>& A) {
        long long i,n,ans;
        sort(A.begin(),A.end());
        ans=0,n=A.size();
        for(i=0;i<n;i++){
            ans=(ans+A[i]*((cal(i)-1+MOD)%MOD))%MOD;
            ans=(ans-A[i]*((cal(n-i-1)-1+MOD)%MOD)+MOD)%MOD;
        }
        return ans;
    }
};
