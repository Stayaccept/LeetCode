class Solution {
public:
    string reverseWords(string s) {
        string ans,tmp;
        int i;
        ans=tmp="";
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(tmp.begin(),tmp.end());
                ans+=tmp;
                ans+=' ';
                tmp="";
            }
            else
            tmp+=s[i];
        }
        reverse(tmp.begin(),tmp.end());
        ans+=tmp;
        return ans;
    }
};
