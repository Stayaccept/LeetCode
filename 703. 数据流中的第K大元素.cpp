class KthLargest {
public:
    int K;
    priority_queue<int,vector<int>,greater<int> > qu;
    KthLargest(int k, vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=nums.size()-1;i>=0;i--){
            qu.push(nums[i]);
            if(qu.size()==k)
            break;
        }
        K=k;
    }
    int add(int val) {
        if(qu.size()<K){
            qu.push(val);
            return qu.top();
        }
        if(val>=qu.top()){
            qu.pop();
            qu.push(val);
            return qu.top();
        }
        return qu.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
