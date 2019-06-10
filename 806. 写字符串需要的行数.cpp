class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int i,u,v;
        vector<int> G;
        u=v=0;
        for(i=0;i<S.size();i++){
            if(v+widths[S[i]-'a']<=100)
            v+=widths[S[i]-'a'];
            else{
                u++;
                v=widths[S[i]-'a'];
            }
        }
        G.push_back(u+1);
        G.push_back(v);
        return G;
    }
};
