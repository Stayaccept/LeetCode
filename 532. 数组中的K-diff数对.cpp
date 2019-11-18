class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i,j,n,ans;
        j=ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            while(j<i&&nums[i]-nums[j]>k)
            j++;
            if(j<i&&i<n&&nums[i]-nums[j]==k){
                while(j<i&&i<n&&nums[i]-nums[j]==k)
                i++;
                i--;
                ans++;
                continue;
            }
        }
        return ans;
    }
};
