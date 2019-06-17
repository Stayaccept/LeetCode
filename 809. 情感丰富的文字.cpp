class Solution {
public:
    int expressiveWords(string S, vector<string>& words) {
        int i,j,k,n,m,ans;
        ans=0;
        n=S.size();
        for(i=0;i<words.size();i++){
            m=words[i].size();
            k=0;
            for(j=0;j<n;j++){
                if(S[j]==words[i][k])
                k++;
                else if(j>=1&&S[j]==S[j-1]&&S[j]==S[j+1])
                continue;
                else if(j>=2&&S[j]==S[j-1]&&S[j]==S[j-2])
                continue;
                else
                break;
            }
            if(j==n&&k==m)
            ans++;
        }
        return ans;
    }
};
