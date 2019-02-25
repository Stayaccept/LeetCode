class Solution {
public:
    bool isPalindrome(int x) {
        int u,v;
        if(x<0)
        return 0;
        u=0,v=x;
        while(x){
            u=u*10+x%10;
            x/=10;
        }
        return u==v;
    }
};
