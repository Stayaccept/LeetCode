//1
class Solution {
public:
    int s[30005];
    int numSubarraysWithSum(vector<int>& A, int S) {
        int i,u,l,r,n,ans;
        n=A.size();
        ans=s[0]=0;
        for(i=0;i<n;i++)
        s[i+1]=s[i]+A[i];
        for(i=0;i<n;i++){
            u=s[i]+S;
            l=lower_bound(s+i+1,s+n+1,u)-s;
            r=upper_bound(s+i+1,s+n+1,u)-s;
            // cout<<u<<" "<<l<<" "<<r<<endl;
            ans+=(r-l);
        }
        return ans;
    }
    
};
//2
class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {
        int i,n,ans,sum;
        map<int,int> mp;
        n=A.size();
        mp.clear();
        ans=sum=0;
        mp[0]=1;
        for(i=0;i<n;i++){
            sum+=A[i];
            ans+=mp[sum-S];
            mp[sum]++;
        }
        return ans;
    }
};
