class Solution {
public:
    int judge(int x){
        int i;
        if(x==1)
        return 0;
        for(i=2;i*i<=x;i++)
        if(x%i==0)
        return 0;
        return 1;
    }
    int sum(int x){
        int u=0;
        while(x){
            if(x%2!=0)
            u++;
            x/=2;
        }
        return judge(u);
    }
    int countPrimeSetBits(int L, int R) {
        int i,ans=0;
        for(i=L;i<=R;i++)
        if(sum(i))
        ans++;
        return ans;
    }
};
