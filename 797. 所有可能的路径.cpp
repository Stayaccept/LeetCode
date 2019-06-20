class Solution {
public:
    int n;
    vector<int> G[20];
    vector<vector<int>> ans;
    void dfs(int s,vector<int> tmp){
        int i;
        tmp.push_back(s);
        if(s==n-1){
            ans.push_back(tmp);
            return;
        }
        for(i=0;i<G[s].size();i++){
            dfs(G[s][i],tmp);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int i,j;
        vector<int> tmp;
        n=graph.size();
        for(i=0;i<n;i++){
            for(j=0;j<graph[i].size();j++){
                G[i].push_back(graph[i][j]);
            }
        }
        tmp.clear();
        dfs(0,tmp);
        return ans;
    }
};
