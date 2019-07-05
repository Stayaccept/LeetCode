class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int i;
        for(i=0;i<A.size();i++){
            if(abs(A[i]-i)>=2)
            return 0;
        }
        return 1;
    }
};
