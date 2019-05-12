class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i;
        vector<char> A,B;
        for(i=0;i<S.size();i++){
            if(S[i]=='#'&&A.size()!=0)
            A.pop_back();
            if(S[i]!='#')
            A.push_back(S[i]);
        }
        for(i=0;i<T.size();i++){
            if(T[i]=='#'&&B.size()!=0)
            B.pop_back();
            if(T[i]!='#')
            B.push_back(T[i]);
        }
        return A==B;
    }
};
