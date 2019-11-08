class Solution {
public:
    map<int,int> mp;
    map<int,int>::iterator ite;
    int leastBricks(vector<vector<int>>& wall) {
        int i,j,n,m,ans,tmp;;
        n=wall.size();
        mp.clear();
        for(i=0;i<n;i++){
            tmp=0;
            m=wall[i].size();
            for(j=0;j+1<m;j++){
                tmp+=wall[i][j];
                mp[tmp]++;
            }
        }
        ans=0;
        for(ite=mp.begin();ite!=mp.end();ite++)
        ans=max(ans,ite->second);
        return n-ans;
    }
};
