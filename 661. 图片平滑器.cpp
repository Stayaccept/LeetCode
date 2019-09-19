/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */
class Solution {
public:
    int xx[10]={0,-1,-1,-1,0,1,1,1,0};
    int yy[10]={0,-1,0,1,1,1,0,-1,-1};
    vector<vector<int>> ans;
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int i,j,k,n,m,u,v,tmpx,tmpy;
        ans=M;
        n=M.size();
        m=M[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                u=v=0;
                for(k=0;k<9;k++){
                    tmpx=i+xx[k];
                    tmpy=j+yy[k];
                    if(tmpx<0||tmpx>=n||tmpy<0||tmpy>=m)
                    continue;
                    u+=M[tmpx][tmpy];
                    v++;
                }
                ans[i][j]=(int)(u*1.0/v);
            }
        }
        return ans;
    }
};

