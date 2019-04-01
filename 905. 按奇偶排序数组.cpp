class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int le,re;
        le=0,re=A.size()-1;
        while(le<re){
            while(le<re&&A[le]%2==0)
            le++;
            while(le<re&&A[re]%2!=0)
            re--;
            if(le<re)
            swap(A[le],A[re]);
        }
        return A;
    }
};
