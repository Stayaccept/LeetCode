/*
 * @lc app=leetcode.cn id=668 lang=cpp
 *
 * [668] 乘法表中第k小的数
 */
class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int i,j,l,r,u,mid,ans;
        l=1,r=n*m;
        while(l<=r){
            mid=(l+r)>>1;
            u=0;
            for(i=1;i<=m;i++)
            u+=min(mid/i,n);
            if(u>=k){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
};

