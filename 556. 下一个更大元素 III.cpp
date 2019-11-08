class Solution {
public:
    typedef long long ll;
    int a[50];
    int nextGreaterElement(int n) {
        ll op,ans;
        int i,j,pos;
        pos=0;
        while(n){
            a[++pos]=n%10;
            n/=10;
        }
        j=-1;
        for(i=1;i+1<=pos;i++){
            if(a[i+1]<a[i]){
                j=i+1;
                break;
            }
        }
        if(j==-1)
        return -1;
        for(i=0;i<j;i++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                break;
            }
        }
        sort(a+1,a+j,greater<int>());
        ans=0,op=1;
        for(i=1;i<=pos;i++){
            ans+=op*a[i];
            op*=10;
        }
        if(ans>INT_MAX)
        return -1;
        return ans;
    }
};
