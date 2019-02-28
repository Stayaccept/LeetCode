class Solution {
public:
    vector<int> ans;
    void dfs(int n,int K,int pre,int sum){
        if(n==0){
            ans.push_back(sum);
            return;
        }
        if(pre+K<10)
        dfs(n-1,K,pre+K,sum*10+pre+K);
        if(pre-K>=0&&pre-K!=pre+K)
        dfs(n-1,K,pre-K,sum*10+pre-K);
    }
    vector<int> numsSameConsecDiff(int N, int K) {
        int i;
        ans.clear();
        if(N==1){
            for(i=0;i<=9;i++)
            ans.push_back(i);
            return ans;
        }
        for(i=1;i<=9;i++)
        dfs(N-1,K,i,i);
        return ans;
    }
};
