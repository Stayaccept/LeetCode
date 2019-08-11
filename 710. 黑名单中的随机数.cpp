class Solution {
public:
    int n;
    vector<int> ans;
    map<int,int> mp1,mp2;
    Solution(int N, vector<int>& blacklist) {
        int i,j;
        n=N-blacklist.size();
        for(i=0;i<blacklist.size();i++){
            if(blacklist[i]<n)
            ans.push_back(blacklist[i]);
            else
            mp2[blacklist[i]]=1;
        }
        mp1.clear();
        j=n;
        for(i=0;i<ans.size();i++){
            while(mp2[j]==1)
            j++;
            mp1[ans[i]]=j++;
        }
    }
    int pick() {
        int u;
        u=rand()%n;
        if(mp1[u]!=0)
        u=mp1[u];
        return u;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(N, blacklist);
 * int param_1 = obj->pick();
 */
