class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int i,sum;
        map<int,int> mp;
        vector<int> ans;
        sum=0;
        mp.clear();
        for(i=0;i<A.size();i++)
        sum+=A[i];
        for(i=0;i<B.size();i++){
            mp[B[i]]=1;
            sum-=B[i];
        }
        ans.clear();
        sum/=2;
        for(i=0;i<A.size();i++){
            if(mp[A[i]-sum]!=0){
                ans.push_back(A[i]);
                ans.push_back(A[i]-sum);
                break;
            }
        }
        return ans;
    }
};
