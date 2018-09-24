class Solution {
public:
    int reverse(int x) {
        int sig;
        long long ans;
        sig=0; 
        if(x==-2147483648)
        return 0;
        if(x<0){
            x=fabs(x);
            sig=1;
        }
        ans=0;
        while(x){
            ans=ans*10+x%10;
            x/=10;
        }
        if(ans>2147483647)
        ans=0;
        if(sig)
        ans=-ans;
        return ans;
    }
};
