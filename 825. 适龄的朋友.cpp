class Solution {
public:
    int a[150],s[150];
    int numFriendRequests(vector<int>& ages) {
        int i,u,ans;
        memset(a,0,sizeof(a));
        for(i=0;i<ages.size();i++)
        a[ages[i]]++;
        s[0]=0;
        for(i=1;i<=120;i++)
        s[i]=s[i-1]+a[i];
        ans=0;
        for(i=1;i<=120;i++){
            if(a[i]==0)
            continue;
            u=(int)(0.5*i+7)+1;
            if(i>=u){
                ans+=a[i]*(s[i-1]-s[u-1]);
                ans+=(a[i]*(a[i]-1));
            }
            
        }
        return ans;
    }
};

