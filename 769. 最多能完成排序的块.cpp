class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int i,u,ans;
        u=-1,ans=0;
        for(i=0;i<arr.size();i++){
            if(max(u,arr[i])>i)
            u=max(u,arr[i]);
            else{
                ans++;
                u=-1;
            }
        }
        return ans;
    }
};
