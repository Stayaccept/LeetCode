class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i,j;
        vector<int> x,y,ans;
        x.clear();
        y.clear();
        ans.clear();
        for(i=0;i<A.size();i++){
            if(A[i]%2!=0)
            x.push_back(A[i]);
            else
            y.push_back(A[i]);
        }
        for(i=0;i<x.size();i++){
            ans.push_back(y[i]);
            ans.push_back(x[i]);
        }
        return ans;
    }
};
