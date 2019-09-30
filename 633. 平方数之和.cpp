/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        int i,u,v;
        for(i=0;i<=(int)sqrt(c);i++){
            u=c-i*i;
            v=(int)sqrt(u);
            if(u==v*v)
            return 1;
        }
        return 0;
    }
};
// @lc code=end

