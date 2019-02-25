class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int i,u,v,sum=0;
        vector<int> ans;
        for(i=0;i<A.size();i++){
            if(A[i]%2==0)
            sum+=A[i];
        }
        ans.clear();
        for(i=0;i<queries.size();i++){
            u=queries[i][0],v=queries[i][1];
            if(A[v]%2==0&&u%2==0)
            sum+=u;
            else if(A[v]%2!=0&&u%2!=0)
            sum+=(A[v]+u);
            else{
                if(A[v]%2==0)
                sum-=A[v];
            }
            A[v]+=u;
            ans.push_back(sum);
        }
        return ans;
    }
};
