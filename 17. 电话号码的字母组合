class Solution {
public:
    int n;
    vector<string> ans;
    vector<char> num[10];
    vector<string> letterCombinations(string digits) {
        char c='a';
        int i,j,u,v;
        string tmp="";
        n=digits.size();
        for(i=2;i<=6;i++){
            num[i].clear();
            for(j=0;j<3;j++){
                num[i].push_back(c);
                c++;
            }
        }
        num[7].clear();
        for(j=0;j<4;j++){
            num[7].push_back(c);
            c++;
        }
        num[8].clear();
        for(j=0;j<3;j++){
            num[8].push_back(c);
            c++;
        }
        num[9].clear();
        for(j=0;j<4;j++){
            num[9].push_back(c);
            c++;
        }
        ans.clear();
        if(n==0)
        return ans;
        dfs(1,digits,tmp);
        return ans;
    }
    void dfs(int op,string digits,string tmp){
        int i,u;
        if(op>n){
            ans.push_back(tmp);
            return;
        }
        u=digits[op-1]-'0';
        for(i=0;i<num[u].size();i++)
        dfs(op+1,digits,tmp+num[u][i]);
    }
};
