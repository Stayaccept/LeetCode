class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int i,n,tmp;
        tmp=0;
        n=nums.size();
        for(i=0;i<n;i++)
        tmp^=nums[i];
        if(tmp==0)
        return 1;
        if(n%2==0)
        return 1;
        return 0;
    }
};
