class Solution {
public:
    string ans,s;
    string toGoatLatin(string S) {
        char c;
        int i,j,id;
        id=1,ans=s="";
        S+=' ';
        for(i=0;i<S.size();i++){
            if(S[i]==' '){
                if(s[0]=='a'||s[0]=='e'||s[0]=='i'||
                   s[0]=='o'||s[0]=='u'||s[0]=='A'||
                   s[0]=='E'||s[0]=='I'||s[0]=='O'||
                   s[0]=='U')
                s+="ma";
                else{
                    c=s[0];
                    s=s.substr(1);
                    s+=c;
                    s+="ma";
                }
                for(j=1;j<=id;j++)
                s+='a';
                if(id!=1)
                ans+=' ';
                ans+=s;
                id++;
                s="";
            }
            else
            s+=S[i];
        }
        return ans;
    }
};
