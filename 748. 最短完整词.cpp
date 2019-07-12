class Solution {
public:
    map<char,int> mp1,mp2;
    map<char,int>::iterator ite;
    string shortestCompletingWord(string S, vector<string>& words) {
        int i,j,u;
        string ans;
        mp1.clear();
        for(i=0;i<S.size();i++){
            if(S[i]>='a'&S[i]<='z')
            mp1[S[i]]++;
            else if(S[i]>='A'&&S[i]<='Z')
            mp1[S[i]-'A'+'a']++;
        }
        u=1005;
        for(i=0;i<words.size();i++){
            mp2.clear();
            for(j=0;j<words[i].size();j++){
                if(words[i][j]>='a'&words[i][j]<='z')
                mp2[words[i][j]]++;
                else if(words[i][j]>='A'&&words[i][j]<='Z')
                mp2[words[i][j]-'A'+'a']++;
            }
            for(ite=mp1.begin();ite!=mp1.end();ite++){
                if(mp2[ite->first]<ite->second)
                goto next;
            }
            if(words[i].size()<u){
                u=words[i].size();
                ans=words[i];
            }
            next:;
        }
        return ans;
    }
};
