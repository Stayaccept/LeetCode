class Solution {
public:
    int s[20005];
    int minFlipsMonoIncr(string S) {
        int i,n,ans;
        n=S.size();
        s[0]=(S[0]=='1');
        for(i=1;i<n;i++)
        s[i]=s[i-1]+(S[i]=='1');
        ans=min(s[n-1],n-s[n-1]);
        for(i=0;i<n;i++)
        ans=min(ans,s[i]+n-1-i-(s[n-1]-s[i]));
        return ans;
    }
};
