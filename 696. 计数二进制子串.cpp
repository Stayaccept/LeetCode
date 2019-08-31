class Solution {
public:
    int countBinarySubstrings(string s) {
        int i,ans,pre,cur;
        ans=pre=0,cur=1;
        for(i=1;i<s.size();i++){
            if(s[i-1]!=s[i]){
                ans+=min(pre,cur);
                pre=cur,cur=1;
            }
            else
            cur++;
        }
        ans+=min(pre,cur);
        return ans;
    }
};
