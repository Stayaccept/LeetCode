class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        map<int,int>::iterator ite;
        int i,j,u,tmp;
        mp.clear();
        for(i=0;i<deck.size();i++)
        mp[deck[i]]++;
        tmp=mp.begin()->second;
        for(ite=mp.begin();ite!=mp.end();ite++)
        tmp=__gcd(tmp,ite->second);
        if(tmp>=2)
        return 1;
        return 0;
    }
};
