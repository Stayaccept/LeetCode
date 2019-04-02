class RLEIterator {
public:
    long long u,sum,a[1005],b[1005];
    RLEIterator(vector<int> A) {
        int i;
        u=0;
        sum=a[u]=0;
        for(i=0;i<A.size();i+=2){
            u++;
            a[u]=a[u-1]+A[i];
        }
        for(i=0;i<A.size();i++)
        b[i]=A[i];
    }
    int next(int n) {
        int v;
        sum+=n;
        if(sum>a[u])
        return -1;
        v=lower_bound(a+1,a+u+1,sum)-a;
        return b[(v-1)*2+1];
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */
