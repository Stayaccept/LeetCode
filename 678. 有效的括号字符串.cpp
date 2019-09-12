/*
 * @lc app=leetcode.cn id=678 lang=cpp
 *
 * [678] 有效的括号字符串
 */
class Solution {
public:
    stack<char> x,y;
    bool checkValidString(string s) {
        int i,n,u,v;
        n=s.size();
        for(i=0;i<n;i++){
            if(s[i]=='(')
            x.push(i);
            else if(s[i]=='*')
            y.push(i);
            else{
                if(x.size()==0&&y.size()==0)
                return 0;
                else{
                    if(x.size()!=0)
                    x.pop();
                    else
                    y.pop();
                }
            }
        }
        if(x.size()==0&&y.size()==0)
        return 1;
        else if(x.size()!=0&&y.size()!=0){
            while(x.size()!=0&&y.size()!=0){
                u=x.top();
                v=y.top();
                if(v<u)
                return 0;
                x.pop();
                y.pop();
            }
            if(x.size()!=0)
            return 0;
            else
            return 1;
        }
        else if(x.size()!=0&&y.size()==0)
        return 0;
        else
        return 1;
    }
};
