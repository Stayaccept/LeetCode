class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        vector<int>::iterator ite;
        int i;
        sort(A.begin(),A.end());
        for(i=0;i<B.size();i++){
            ite=upper_bound(A.begin(),A.end(),B[i]);
            if(ite==A.end()){
                ans.push_back(*A.begin());
                A.erase(A.begin());
            }
            else{
                ans.push_back(*ite);
                A.erase(ite);
            }
        }
        return ans;
    }
};
