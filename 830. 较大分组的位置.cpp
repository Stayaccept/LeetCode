class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int i,l,r,n,u;
        vector<int> tmp;
        vector<vector<int> > ans;
        n=S.size();
        for(i=0;i<n;i++){
            if(tmp.size()==0)
            tmp.push_back(S[i]);
            else if(S[i]==S[i-1])
            tmp.push_back(S[i]);
            else{
                u=tmp.size();
                tmp.clear();
                if(u>=3){
                    tmp.push_back(i-u);
                    tmp.push_back(i-1);
                    ans.push_back(tmp);
                }
                tmp.clear();
                tmp.push_back(S[i]);
            }
        }
        u=tmp.size();
        if(u>=3){
            tmp.clear();
            tmp.push_back(n-u);
            tmp.push_back(n-1);
            ans.push_back(tmp);
        }
        return ans;
    }
};
