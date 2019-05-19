class Solution {
public:
    void findSecretWord(vector<string>& wordlist, Master& master) {
        int i,j,k,u,v;
        vector<string> tmp;
        for(i=0;i<10;i++){
            random_shuffle(wordlist.begin(),wordlist.end());
            u=master.guess(wordlist[0]);
            if(u==6)
            break;
            tmp.clear();
            for(j=0;j<wordlist.size();j++){
                v=0;
                for(k=0;k<6;k++)
                if(wordlist[j][k]==wordlist[0][k])
                v++;
                if(u==v)
                tmp.push_back(wordlist[j]);
            }
            wordlist=tmp;
        }
    }
};
