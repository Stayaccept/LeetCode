class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,st,ans;
        map<char,int> mp;
        mp.clear();
        st=ans=0;
        for(i=0;i<s.size();i++){
            if(mp[s[i]]==0||mp[s[i]]<st)
            ans=max(ans,i-st+1);
            else
            st=mp[s[i]];
            mp[s[i]]=i+1;
        }
        return ans;
    }
};
