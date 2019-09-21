/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */
class Solution {
public:
    bool judgeCircle(string moves) {
        int i,u,v,n;
        n=moves.size();
        u=v=0;
        for(i=0;i<n;i++){
            if(moves[i]=='U')
            u++;
            else if(moves[i]=='D')
            u--;
            else if(moves[i]=='L')
            v++;
            else
            v--;
        }
        if(u==0&&v==0)
        return 1;
        return 0;
    }
};

