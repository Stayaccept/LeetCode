class Solution {
public:
    int a[10005];
    int findMinMoves(vector<int>& machines) {
        int i,j,u,v,n,ans,sum,tmp;
        n=machines.size();
        tmp=0;
        for(i=0;i<n;i++)
        tmp+=machines[i];
        if(tmp%n!=0)
        return -1;
        u=ans=sum=0;
        for(i=0;i<n;i++){
            u=sum-i*(tmp/n);
            sum+=machines[i];
            v=(tmp-sum)-(n-i-1)*(tmp/n);
            if(u<0&&v<0)
            ans=max(ans,0-u-v);
            else
            ans=max(ans,max(abs(u),abs(v)));
        }
        return ans;
    }
};
