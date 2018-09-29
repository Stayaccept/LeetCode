class Solution {
public:
    int n;
    vector<string> ans;
    void dfs(int x,int y,string tmp){
        if(x>n||y>n)
        return;
        if(x==n&&y==n)
        ans.push_back(tmp);
        dfs(x+1,y,tmp+'(');
        if(x>y)
        dfs(x,y+1,tmp+')');
    }
    vector<string> generateParenthesis(int m) {
        string tmp="";
        n=m;
        dfs(0,0,tmp);
        return ans;
    }
};
