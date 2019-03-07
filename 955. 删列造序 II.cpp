class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        vector<string> s;
        int i,j,n,m,ans,sig;
        m=A.size();
        n=A[0].size();
        ans=0;
        s.clear();
        for(i=0;i<m;i++)
        s.push_back("");
        for(i=0;i<n;i++){
            sig=0;
            for(j=1;j<m;j++){
                if(s[j-1]==s[j]&&A[j][i]<A[j-1][i]){
                    sig=1;
                    ans++;
                    break;
                }
            }
            if(sig==0){
                for(j=0;j<m;j++)
                s[j]+=A[j][i];
            }
        }
        return ans;
    }
};
