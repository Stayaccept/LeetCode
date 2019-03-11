class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int i,ans;
        sort(A.begin(),A.end());
        ans=0;
        for(i=1;i<A.size();i++){
            if(A[i]>A[i-1])
            continue;
            ans+=(A[i-1]-A[i]+1);
            A[i]=A[i-1]+1;
        }
        return ans;
    }
};
