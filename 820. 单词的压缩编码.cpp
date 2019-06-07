class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int i,ans;
        string tmp;
        set<string> se;
        set<string>::iterator ite;
        for(i=0;i<words.size();i++)
        se.insert(words[i]);
        ans=0;
        for(ite=se.begin();ite!=se.end();ite++){
            tmp=*ite;
            for(i=1;i<tmp.size();i++)
            se.erase(tmp.substr(i));
        }
        for(ite=se.begin();ite!=se.end();ite++)
        ans+=((*ite).size());
        return ans+se.size();
    }
};
