class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        int i,j,u,v;
        vector<string> ans;
        map<char,int> mp_a,mp_b;
        map<char,int>::iterator ite;
        ans.clear();
        mp_b.clear();
        for(i=0;i<B.size();i++){
            mp_a.clear();
            for(j=0;j<B[i].size();j++)
            mp_a[B[i][j]]++;
            for(ite=mp_a.begin();ite!=mp_a.end();ite++){
                u=ite->first;
                v=ite->second;
                mp_b[u]=max(mp_b[u],v);
            }
        }
        for(i=0;i<A.size();i++){
            mp_a.clear();
            for(j=0;j<A[i].size();j++)
            mp_a[A[i][j]]++;
            for(ite=mp_b.begin();ite!=mp_b.end();ite++){
                u=ite->first;
                v=ite->second;
                if(v>mp_a[u])
                goto next;
            }
            ans.push_back(A[i]);
            next:;
        }
        return ans;
    }
};
