class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
         int i,j,n;
         vector<int> tmp;
         vector<vector<int> > ans;
         n=S.size();
         i=0;
         while(i<n){
            j=i;
            while(j+1<n&&S[j+1]==S[j])
            j++;
            if(j-i+1>=3){
                tmp.clear();
                tmp.push_back(i);
                tmp.push_back(j);
                ans.push_back(tmp);
            }
            i=j+1;
         }
         return ans;
    }
};
