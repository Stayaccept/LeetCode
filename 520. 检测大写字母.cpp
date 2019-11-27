class Solution {
public:
    bool detectCapitalUse(string word) {
        int i,u;
        u=0;
        for(i=0;i<word.size();i++){
            if(word[i]>='A'&&word[i]<='Z')
            u++;
        }
        if(u==word.size()||u==0||(u==1&&word[0]>='A'&&word[0]<='Z'))
        return 1;
        return 0;
    }
};
