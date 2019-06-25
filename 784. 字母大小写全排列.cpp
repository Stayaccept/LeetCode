class Solution {
public:
    string str;
    vector<string> ans;
    void dfs(string tmp,int x){
        char c;
        if(x==str.size()){
            ans.push_back(tmp);
            return;
        }
        if(str[x]>='0'&&str[x]<='9')
        dfs(tmp+str[x],x+1);
        else if(str[x]>='a'&&str[x]<='z'){
            c=str[x]-'a'+'A';
            dfs(tmp+c,x+1);
            dfs(tmp+str[x],x+1);
        }
        else{
            c=str[x]-'A'+'a';
            dfs(tmp+c,x+1);
            dfs(tmp+str[x],x+1);
        }
    }
    vector<string> letterCasePermutation(string S) {
        string tmp="";
        str=S;
        dfs(tmp,0);
        return ans;
    }
};
