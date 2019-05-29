class Solution {
public:
    int consecutiveNumbersSum(int N) {
        int i,j,m,ans,tmp;
        m=(int)sqrt(2*N),N*=2;
        ans=0;
        for(i=1;i<=m;i++){
            if(N%i!=0)
            continue;
            tmp=N/i+1-i;
            if(tmp%2==0)
            ans++;
        }
        return ans;
    }
};
