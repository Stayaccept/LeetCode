class Solution {
public:
    long long a[20005];
    string shiftingLetters(string S, vector<int>& shifts) {
        int i,n;
        long long u;
        n=shifts.size();
        a[n-1]=shifts[n-1];
        for(i=n-2;i>=0;i--)
        a[i]=a[i+1]+shifts[i];
        for(i=0;i<n;i++){
            u=a[i]%26;
            S[i]='a'+(S[i]-'a'+u)%26;
        }
        return S;
    }
};
