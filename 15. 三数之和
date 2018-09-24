class Solution {
public:
    vector<vector<int> >threeSum(vector<int>& nums) {
        int i,j,k,len;
        vector<int> a;
        vector<vector<int> > ans;
        ans.clear();
        len=nums.size();
        if(len<3)
        return ans;
        sort(nums.begin(),nums.end());
        for(i=0;i<len;i++){
            if(i!=0&&nums[i]==nums[i-1])
            continue;
            j=i+1,k=len-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<0)
                j++;
                else if(nums[i]+nums[j]+nums[k]>0)
                k--;
                else{
                    a.clear();
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[k]);
                    ans.push_back(a);
                    while(j<k&&nums[j]==nums[j+1])
                    j++;
                    while(j<k&&nums[k]==nums[k-1])
                    k--;
                    j++,k--;
                }
            }
        }
        return ans;
    }
};
