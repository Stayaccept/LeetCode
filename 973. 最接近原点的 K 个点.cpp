class Solution {
public:
    struct node{
        int x,y;
        friend bool operator<(node a,node b){
            return a.x*a.x+a.y*a.y<b.x*b.x+b.y*b.y;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int i;
        vector<int> u;
        vector<node> tmp;
        vector<vector<int> > ans;
        for(i=0;i<points.size();i++)
        tmp.push_back((node){points[i][0],points[i][1]});
        sort(tmp.begin(),tmp.end());
        for(i=0;i<K;i++){
            u.clear();
            u.push_back(tmp[i].x);
            u.push_back(tmp[i].y);
            ans.push_back(u);
        }
        return ans;
    }
};
