class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i,n;
        map<int,int> mp;
        mp.clear();
        for(i=0;i<bills.size();i++){
            n=bills[i]-5;
            mp[bills[i]]++;
            if(n==0)
            continue;
            else if(n==5){
                if(mp[5]>0)
                mp[5]--;
                else
                return 0;
            }
            else{
                if(mp[10]>=1&&mp[5]>=1)
                mp[5]--,mp[10]--;
                else if(mp[5]>=3)
                mp[5]-=3;
                else
                return 0;
            }
        }
        return 1;
    }
};
