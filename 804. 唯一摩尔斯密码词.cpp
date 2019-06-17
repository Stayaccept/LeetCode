class Solution {
public:
    string pw[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> se;
        int i,j,n;
        string s;
        n=words.size();
        for(i=0;i<n;i++){
            s="";
            for(j=0;j<words[i].size();j++)
            s+=pw[words[i][j]-'a'];
            se.insert(s);
        }
        return se.size();
    }
};
