class Solution {
public:
    vector<char> G;
    string reverseOnlyLetters(string S) {
        int i,j;
        string ans="";
        G.clear();
        for(i=0;i<S.size();i++){
            if((S[i]>='a'&&S[i]<='z')||(S[i]>='A'&&S[i]<='Z'))
            G.push_back(S[i]);
        }
        reverse(G.begin(),G.end());
        j=0;
        for(i=0;i<S.size();i++){
            if((S[i]>='a'&&S[i]<='z')||(S[i]>='A'&&S[i]<='Z'))
            ans+=G[j++];
            else
            ans+=S[i];
        }
        return ans;
    }
};
