/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文字符串 Ⅱ
 */
class Solution {
public:
    int u,v;
    int judge(int l,int r,string s){
        while(l<r){
            if(s[l]==s[r])
            l++,r--;
            else{
                u=l,v=r;
                return 0;
            }
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int l,r,n;
        n=s.size();
        if(judge(0,n-1,s))
        return 1;
        else{
            l=u,r=v;
            if(judge(l,r-1,s)||judge(l+1,r,s))
            return 1;
            return 0;
        }
    }
};

