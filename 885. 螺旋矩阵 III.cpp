class Solution {
public:
    int sum;
    vector<int> tmp;
    vector<vector<int> > ans;
    void judge(int x,int y,int R,int C){
        // cout<<x<<" "<<y<<endl;
        if(x<0||x>=R||y<0||y>=C)
        return;
        sum++;
        tmp.clear();
        tmp.push_back(x);
        tmp.push_back(y);
        ans.push_back(tmp);
    }
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        int i,j,n,op;
        n=R*C,op=sum=0;
        judge(r0,c0,R,C);
        while(1){
            op++;
            for(j=1;j<=op;j++){
                c0++;
                judge(r0,c0,R,C);
            }
            for(j=1;j<=op;j++){
                r0++;
                judge(r0,c0,R,C);
            }
            op++;
            for(j=1;j<=op;j++){
                c0--;
                judge(r0,c0,R,C);
            }
            for(j=1;j<=op;j++){
                r0--;
                judge(r0,c0,R,C);
            }
            if(sum==n)
            break;
        }
        return ans;
    }
};
