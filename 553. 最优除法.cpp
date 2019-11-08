class Solution {
public:
    string change(int x){
        string s="";
        while(x){
            s+=(x%10+'0');
            x/=10;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string optimalDivision(vector<int>& nums) {
        int i,n;
        string s="";
        n=nums.size();
        for(i=0;i<n;i++){
            if(i!=0)
            s+='/';
            if(n>2&&i==1)
            s+='(';
            s+=change(nums[i]);
        }
        if(n>2)
        s+=')';
        return s;
    }
};
