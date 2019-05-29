class Solution {
public:
    string maskPII(string S) {
        int i,j,u,n,sig;
        string ans;
        vector<char> tmp;
        n=S.size(),sig=0;
        for(i=0;i<n;i++)
        if(S[i]=='@'){
            sig=1;
            break;
        }
        if(sig==1){
            for(i=0;i<n;i++)
            if(S[i]>='A'&&S[i]<='Z')
            S[i]=S[i]-'A'+'a';
            for(i=0;i<n;i++){
                if(S[i]=='@')
                break;
            }
            ans+=S[0];
            for(j=0;j<5;j++)
            ans+='*';
            ans+=S[i-1];
            for(j=i;j<n;j++)
            ans+=S[j];
        }
        else{
            for(i=0;i<n;i++)
            if(S[i]>='0'&&S[i]<='9')
            tmp.push_back(S[i]);
            u=tmp.size();
            ans="";
            if(u>10)
            ans+='+';
            cout<<u<<endl;
            for(i=1;i<=u-10;i++)
            ans+='*';   
            if(u>10)
            ans+='-';
            ans+="***-***-";
            for(i=u-4;i<u;i++)
            ans+=tmp[i];
        }
        return ans;
    }
};
