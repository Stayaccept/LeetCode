class Solution {
public:
    int n;
    vector<int> G;
    int cal(int op){
        int i,u,ans;
        u=ans=0;
        for(i=0;i<n;i++){
            if(G[i]<=op){
                u++;
                ans+=u;
            }
            else
            u=0;
        }
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
        int i;
        n=A.size();
        for(i=0;i<n;i++)
        G.push_back(A[i]);
        return cal(R)-cal(L-1);
    }
};
