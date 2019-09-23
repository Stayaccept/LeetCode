/*
 * @lc app=leetcode.cn id=649 lang=cpp
 *
 * [649] Dota2 参议院
 */
class Solution {
public:
    string predictPartyVictory(string senate) {
        string tmp;
        int i,R,D;
        R=D=0;
        while(1){
            tmp="";
            for(i=0;i<senate.size();i++){
                if(senate[i]=='R'){
                    if(D==0){
                        tmp+='R';
                        R++;
                    }
                    else
                    D--;
                }
                else{
                    if(R==0){
                        tmp+='D';
                        D++;
                    }
                    else
                    R--;
                }
            }
            if(senate==tmp)
            break;
            senate=tmp;
        }
        if(senate[0]=='R')
        return "Radiant";
        return "Dire";
    }
};

