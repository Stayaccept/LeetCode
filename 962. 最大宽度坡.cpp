class Solution {
public:
    struct node{
        int id,val;
        friend bool operator<(node a,node b){
            if(a.val==b.val)
            return a.id<b.id;
            return a.val<b.val;
        }
    }s[50005];
    int maxWidthRamp(vector<int>& A) {
        int i,n,ans;
        set<int> se;
        n=A.size();
        for(i=0;i<n;i++)
        s[i].id=i,s[i].val=A[i];
        sort(s,s+n);
        ans=0;
        se.clear();
        se.insert(s[0].id);
        for(i=1;i<n;i++){
            ans=max(ans,max(0,s[i].id-*se.begin()));
            se.insert(s[i].id);
        }
        return ans;
    }
};
