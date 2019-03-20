class Solution {
public:
    vector<int> ans,tmp;
    void dfs(int l,int r){
        int i,mid;
        if(l==r)
        return;
        tmp.clear();
        for(i=l;i<=r;i+=2)
        tmp.push_back(ans[i]);
        for(i=l+1;i<=r;i+=2)
        tmp.push_back(ans[i]);
        for(i=l;i<=r;i++)
        ans[i]=tmp[i-l];
        mid=(l+r)>>1;
        dfs(l,mid);
        dfs(mid+1,r);
    }
    vector<int> beautifulArray(int N) {
        int i;
        for(i=0;i<N;i++)
        ans.push_back(i+1);
        dfs(0,N-1);
        return ans;
    }
};
