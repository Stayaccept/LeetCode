class Solution {
public:
    string longestPalindrome(string s){
        int L[2005];
        char S[2005];
        string res="";
        int i,id,mx,op,ans,len;
        S[0]='$',S[1]='#';
        len=2;
        for(i=0;i<s.size();i++){
            S[len++]=s[i];
            S[len++]='#';
        }
        S[len]='#';
        id=mx=ans=0;
        memset(L,0,sizeof(L));
        for(i=1;i<=len;i++){
            if(i<mx)
            L[i]=min(L[2*id-i],mx-i);
            else
            L[i]=1;
            while(S[i-L[i]]==S[i+L[i]])
            L[i]++;
            if(i+L[i]>mx){
                mx=i+L[i];
                id=i;
            }
            if(ans<L[i]-1){
                ans=L[i]-1;
                op=i/2-1;
            }
        }
        if(ans&1){
            ans=(ans-1)>>1;
            for(i=op-ans;i<=op+ans;i++)
            res+=s[i];
        }
        else{
            ans>>=1;
            for(i=op-ans+1;i<=op+ans;i++)
            res+=s[i];
        }
        return res;
    }
};
