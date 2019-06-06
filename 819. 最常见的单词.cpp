class Solution {
public:
    map<string,int> mp1,mp2;
    map<string,int>::iterator ite;
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int i,ans;
        string tmp;
        mp1.clear();
        mp2.clear();
        for(i=0;i<paragraph.size();i++){
            if(paragraph[i]<='Z'&&paragraph[i]>='A')
            paragraph[i]=paragraph[i]-'A'+'a';    
        }
        for(i=0;i<banned.size();i++)
        mp2[banned[i]]=1;
        paragraph+=' ';
        tmp="";
        for(i=0;i<paragraph.size();i++){
            if(paragraph[i]<'a'||paragraph[i]>'z'){
                if(mp2[tmp]==0&&tmp!="")
                mp1[tmp]++;
                tmp="";
            }
            else
            tmp+=paragraph[i];
        }
        ans=0,tmp="";
        for(ite=mp1.begin();ite!=mp1.end();ite++){
            if(ite->second>ans){
                ans=ite->second;
                tmp=ite->first;
            }
        }
        return tmp;
    }
};
