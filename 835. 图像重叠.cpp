class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
            int i,j,p,q,n,m,ans;
            map<pair<int,int>,int> mp;
            map<pair<int,int>,int>::iterator ite;
            n=A.size();
            m=A[0].size();
            mp.clear();
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(A[i][j]==0)
                    continue;
                    for(p=0;p<n;p++){
                        for(q=0;q<m;q++){
                            if(B[p][q]==0)
                            continue;
                            mp[make_pair(p-i,q-j)]++;
                        }
                    }
                }
            }
            ans=0;
            for(ite=mp.begin();ite!=mp.end();ite++)
            ans=max(ans,ite->second);
            return ans;
    }
};
