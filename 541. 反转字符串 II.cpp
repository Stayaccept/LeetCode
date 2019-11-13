class Solution {
public:
    string reverseStr(string s, int k) {
        int i,n;
        n=s.size();
        for(i=0;i<n;i+=2*k){
            if(i+k-1>=n)
            reverse(s.begin()+i,s.end());
            else
            reverse(s.begin()+i,s.begin()+i+k);
        }
        return s;
    }
};
