/*
 * @lc app=leetcode.cn id=686 lang=cpp
 *
 * [686] 重复叠加字符串匹配
 */
class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int u=1;
        string tmp;
        tmp=A;
        while(A.size()<B.size()){
            A+=tmp;
            u++;
        }
        if(A.find(B)!=A.npos)
        return u;
        A+=tmp;
        if(A.find(B)!=A.npos)
        return u+1;
        return -1;
        
    }
};

