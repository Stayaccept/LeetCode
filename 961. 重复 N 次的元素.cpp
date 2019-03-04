class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int i,u;
        u=A[0];
        for(i=2;i<A.size();i++)
        if(A[i]==A[i-1]||A[i]==A[i-2])
        u=A[i];
        return u;
    }
};
