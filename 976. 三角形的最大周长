class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        int i;
        sort(A.begin(),A.end(),greater<int>());
        for(i=0;i+2<A.size();i++){
            if(A[i+1]+A[i+2]>A[i])
            return A[i]+A[i+1]+A[i+2];
        }
        return 0;
    }
};
