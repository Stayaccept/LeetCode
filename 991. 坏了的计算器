class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans=0;
        if(X>=Y)
        return X-Y;
        while(X<Y){
            if(Y%2!=0)
            Y++;
            else
            Y>>=1;
            ans++;
        }
        return ans+X-Y;
    }
};
