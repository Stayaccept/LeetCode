class Solution {
public:
    int cal(int x){
        int u,sig=0;
        while(x){
            u=x%10;
            if(u==3||u==4||u==7)
            return 0;
            if(u==2||u==5||u==6||u==9)
            sig=1;
            x/=10;
        }
        return sig;
    }
    int rotatedDigits(int N) {
        int i,ans;
        ans=0;
        for(i=1;i<=N;i++){
            if(cal(i))
            ans++;
        }
        return ans;
    }
};
