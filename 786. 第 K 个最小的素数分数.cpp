class Solution {
public:
    int n,p,q;
    vector<int> G;
    int cal(double mid){
        int i,j,ans;
        j=ans=0;
        for(i=0;i<n;i++){
            while(j<n&&G[i]*1.0/G[j]>mid)
            j++;
            ans+=n-j;
            if(j<n&&G[i]*q>G[j]*p)
            p=G[i],q=G[j];
        }
        return ans;
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& A, int K) {
        int i,u,v;
        double l,r,mid;
        vector<int> ans;
        n=A.size();
        for(i=0;i<n;i++)
        G.push_back(A[i]);
        l=0,r=1;
        for(i=0;i<100;i++){
            mid=(l+r)/2;
            p=0,q=1;
            if(cal(mid)>=K){
                r=mid;
                u=p,v=q;
            }
            else
            l=mid;
        }
        ans.push_back(u);
        ans.push_back(v);
        return ans;
    }
};
