class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans;
        int i,j,k,n;
        n=points.size();
        ans=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    ans=max(ans,fabs(points[i][0]*points[j][1]+
                                     points[k][0]*points[i][1]+
                                     points[j][0]*points[k][1]-
                                     points[k][0]*points[j][1]-
                                     points[j][0]*points[i][1]-
                                     points[i][0]*points[k][1]));
                }
            }
        }
        return ans*0.5;
    }
};
