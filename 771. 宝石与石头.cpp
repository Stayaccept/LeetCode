class Solution {
public:
    map<char,int> mp;
    int numJewelsInStones(string J, string S) {
        int i,ans;
        mp.clear();
        for(i=0;i<J.size();i++)
        mp[J[i]]=1;
        ans=0;
        for(i=0;i<S.size();i++){
            if(mp[S[i]]!=0)
            ans++;
        }
        return ans;
    }
};
