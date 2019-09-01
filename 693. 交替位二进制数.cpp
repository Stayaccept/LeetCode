class Solution {
public:
    bool hasAlternatingBits(int n) {
        int u,v;
        u=1-n%2;
        while(n){
            if(n%2==u)
            return 0;
            u=n%2;
            n/=2;
        }
        return 1;
    }
};
