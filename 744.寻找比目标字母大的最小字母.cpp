class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        int i,n,l,r,mid;
        n=letters.size();
        l=0,r=n-1;
        ans='#';
        while(l<=r){
            mid=(l+r)>>1;
            if(letters[mid]>target){
                ans=letters[mid];
                r=mid-1;
            }
            else
            l=mid+1;
        }
        if(ans=='#')
        ans=letters[0];
        return ans;
    }
};
