class Solution {
public:
    map<char,int> mp1,mp2;
    map<char,int>::iterator ite;
    int judge(){
        char u;
        for(ite=mp2.begin();ite!=mp2.end();ite++){
            u=ite->first;
            if(mp1[u]<ite->second)
            return 0;
        }
        return 1;
    }
    string minWindow(string s, string t) {
        string tmp="";
        int i,j,u,v,ans;
        mp1.clear();
        mp2.clear();
        for(i=0;i<t.size();i++)
        mp2[t[i]]++;
        j=0,ans=0x3f3f3f3f;
        for(i=0;i<s.size();i++){
            mp1[s[i]]++;
            while(j<=i&&judge()!=0){
                if(i-j+1<ans){
                    ans=i-j+1;
                    u=j,v=i;
                }
                mp1[s[j]]--;
                j++;
            }
        }
        if(ans!=0x3f3f3f3f){
            for(i=u;i<=v;i++)
            tmp+=s[i];
        }
        return tmp;
    }
};
