class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int i,j,u;
        string p,q;
        map<char,char> mp;
        vector<string> ans;
        u=0,p="";
        mp.clear();
        for(i=0;i<pattern.size();i++){
            if(mp[pattern[i]]==0){
                mp[pattern[i]]='a'+u;
                u++;
            }
            p+=mp[pattern[i]];
        }
        for(i=0;i<words.size();i++){
            u=0,q="",mp.clear();
            for(j=0;j<words[i].size();j++){
                if(mp[words[i][j]]==0){
                    mp[words[i][j]]='a'+u;
                    u++;
                }
                q+=mp[words[i][j]];
            }
            if(p==q)
            ans.push_back(words[i]);
        }
        return ans;
    }
};
