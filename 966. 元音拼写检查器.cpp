class Solution {
public:
    string change1(string tmp){
        int j;
        for(j=0;j<tmp.size();j++){
            if(tmp[j]>='A'&&tmp[j]<='Z')
            tmp[j]=tmp[j]-'A'+'a';
        }
        return tmp;
    }
    string change2(string tmp){
        int j;
        for(j=0;j<tmp.size();j++){
            if(tmp[j]>='A'&&tmp[j]<='Z')
            tmp[j]=tmp[j]-'A'+'a';
            if(tmp[j]=='a'||tmp[j]=='e'||
               tmp[j]=='i'||tmp[j]=='o'||
               tmp[j]=='u')
            tmp[j]='A';
        }
        return tmp;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        int i,j;
        string tmp;
        vector<string> ans;
        map<string,int> mp[3];
        for(i=0;i<3;i++)
        mp[i].clear();
        for(i=0;i<wordlist.size();i++){
            tmp=wordlist[i];
            if(mp[0][tmp]==0)
            mp[0][tmp]=i+1;
            if(mp[1][change1(tmp)]==0)
            mp[1][change1(tmp)]=i+1;
            if(mp[2][change2(tmp)]==0)
            mp[2][change2(tmp)]=i+1;
        }
        for(i=0;i<queries.size();i++){
            tmp=queries[i];
            if(mp[0][tmp]!=0)
            ans.push_back(wordlist[mp[0][tmp]-1]);
            else if(mp[1][change1(tmp)]!=0)
            ans.push_back(wordlist[mp[1][change1(tmp)]-1]);
            else if(mp[2][change2(tmp)]!=0)
            ans.push_back(wordlist[mp[2][change2(tmp)]-1]);
            else{
                tmp="";
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};
