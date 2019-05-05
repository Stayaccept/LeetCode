class Solution {
public:
    int mirrorReflection(int p, int q) {
        int t,a,b;
        t=p/__gcd(p,q)*q;
        a=t/p,b=t/q;
        if(a%2!=0){
            if(b%2!=0)
            return 1;
            else
            return 2;
        }
        else{
            if(b%2!=0)
            return 0;
            else
            return 2;
        }
    }
};
