class Solution {
public:
    int a[505][26];
    vector<int> partitionLabels(string S) {
        int i,j,u,n,sig;
        vector<int> ans;
        n=S.size();
        memset(a,0,sizeof(a));
        for(i=n-1;i>=0;i--){
            for(j=0;j<26;j++)
            a[i][j]|=a[i+1][j];
            a[i][S[i]-'a']=1;
        }
        u=-1;
        for(i=0;i<n;i++){
            sig=0;
            for(j=u+1;j<=i;j++){
                if(a[i+1][S[j]-'a']==1){
                    sig=1;
                    break;
                }
            }
            if(sig==1)
            continue;
            ans.push_back(i-u);
            u=i;
        }
        return ans;
    }
};
