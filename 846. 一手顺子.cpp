class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        int i,n,u,v;
        map<int,int> mp;
        map<int,int>::iterator ite;
        n=hand.size();
        if(n%W!=0)
        return 0;
        if(W==1)
        return 1;
        mp.clear();
        for(i=0;i<n;i++)
        mp[hand[i]]++;
        for(ite=mp.begin();ite!=mp.end();ite++){
            u=ite->first;
            v=ite->second;
            if(v==0)
            continue;
            for(i=0;i<W;i++){
                if(mp[u+i]<v)
                return 0;
                mp[u+i]-=v;
            }
        }
        return 1;
    }
};
