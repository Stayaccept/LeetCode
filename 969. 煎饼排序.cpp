class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        int i,j,u,v;
        vector<int> ans;
        for(i=0;i<A.size();i++){
            u=A[0],v=0;
            for(j=0;j<A.size()-i;j++)
            if(A[j]>=u)
            u=A[j],v=j;
            ans.push_back(v+1);
            for(j=0;j*2<=v;j++)
            swap(A[j],A[v-j]);
            for(j=0;j*2<A.size()-i;j++)
            swap(A[j],A[A.size()-i-j-1]);
            ans.push_back(A.size()-i);
        }
        return ans;
    }
};
