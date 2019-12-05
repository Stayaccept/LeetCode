class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,ans=0;
        for(i=2;i*i<=num;i++){
            if(num%i!=0)
            continue;
            if(i*i==num)
            ans+=i;
            else
            ans+=(i+num/i);
        }
        if(num!=1)
        ans++;
        if(num==ans)
        return 1;
        return 0;
    }
};
