class Solution {
public:
    int G[1005][1005];
    int maximalRectangle(vector<vector<char>>& matrix) {
        stack<int> sta;
        int i,j,n,m,u,ans;
        n=matrix.size();
        if(n==0)
        return 0;
        m=matrix[0].size();
        sta.push(-1);
        ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                G[i][j]=matrix[i][j]-'0';
                if(i!=0&&G[i][j]==1)
                G[i][j]+=G[i-1][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                u=sta.top();
                while(u!=-1&&G[i][u]>G[i][j]){
                    sta.pop();
                    ans=max(ans,(j-sta.top()-1)*G[i][u]);
                    u=sta.top();
                }
                sta.push(j);
            }
            u=sta.top();
            while(u!=-1){
                sta.pop();
                ans=max(ans,(m-sta.top()-1)*G[i][u]);
                u=sta.top();
            }
        }
        return ans;
    }
};
