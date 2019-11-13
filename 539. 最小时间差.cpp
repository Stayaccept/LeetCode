class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int i,a,b,ans;
        int INF=0x3f3f3f3f;
        vector<int> G;
        for(i=0;i<timePoints.size();i++){
            a=(timePoints[i][0]-'0')*10+(timePoints[i][1]-'0');
            b=(timePoints[i][3]-'0')*10+(timePoints[i][4]-'0');
            G.push_back(a*60+b);
        }
        sort(G.begin(),G.end());
        ans=INF;
        for(i=1;i<G.size();i++)
        ans=min(ans,G[i]-G[i-1]);
        ans=min(ans,24*60-G[G.size()-1]+G[0]);
        return ans;
    }
};
