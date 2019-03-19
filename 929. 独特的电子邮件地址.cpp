class Solution {
public:
    set<string> se;
    int numUniqueEmails(vector<string>& emails) {
        string s,tmp;
        int i,j,op,sig;
        for(i=0;i<emails.size();i++){
            tmp=emails[i];
            s="",op=sig=0;
            for(j=0;j<tmp.size();j++){
                if(tmp[j]=='@')
                op=0,sig=1;
                if(sig==0&&tmp[j]=='+')
                op=1;
                if((op==1)||(tmp[j]=='.'&&sig==0))
                continue;
                s=s+tmp[j];
            }
            se.insert(s);
        }
        return se.size();
    }
};
