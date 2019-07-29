class Solution {
public:
    int judge(int x){
        int i,u,v;
        u=x;
        while(x){
            v=x%10;
            if(v==0||u%v!=0)
            return 0;
            x/=10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        int i;
        vector<int> ans;
        for(i=left;i<=right;i++){
            if(judge(i))
            ans.push_back(i);
        }
        return ans;
    }
};
