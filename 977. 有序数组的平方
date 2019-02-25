class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i,j;
        vector<int> ans;
        i=0,j=A.size()-1;
        while(i<=j){
            if(A[i]*A[i]<=A[j]*A[j]){
                ans.push_back(A[j]*A[j]);
                j--;
            }
            else{
                ans.push_back(A[i]*A[i]);
                i++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
