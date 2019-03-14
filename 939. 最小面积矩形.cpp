class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        int i,j,k,n,ans,tmp;
        int x1,x2,x3,x4,x_min,x_max,y_min,y_max;
        int INF=0x3f3f3f3f;
        map<pair<int,int>,int> mp;
        mp.clear();
        n=points.size();
        for(i=0;i<n;i++)
        mp[make_pair(points[i][0],points[i][1])]=i+1;
        ans=INF;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                    x_min=min(points[i][0],points[j][0]);
                    x_max=max(points[i][0],points[j][0]);
                    y_min=min(points[i][1],points[j][1]);
                    y_max=max(points[i][1],points[j][1]);
                    x1=mp[make_pair(x_min,y_min)];
                    x2=mp[make_pair(x_min,y_max)];
                    x3=mp[make_pair(x_max,y_min)];
                    x4=mp[make_pair(x_max,y_max)];
                    if(x1!=0&&x2!=0&&x3!=0&&x4!=0){
                        tmp=(x_max-x_min)*(y_max-y_min);
                        if(tmp!=0)
                        ans=min(ans,tmp);
                    }
            }
        }
        if(ans==INF)
        ans=0;
        return ans;
    }
};
