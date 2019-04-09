class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        int i,j,n;
        string a,b,c;
        set<string> se;
        for(i=0;i<A.size();i++){
            a=b=c="";
            n=A[i].size();
            for(j=0;j<n;j+=2){
                a+=A[i][j];
                if(j+1<n)
                b+=A[i][j+1];
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            for(j=0;j<n/2;j++){
                c+=a[j];
                c+=b[j];
            }
            if(n%2!=0)
            c+=a[n/2];
            se.insert(c);
        }
        return se.size();
    }
};
