class Solution {
public:
    int vis1[30],vis2[30];
    bool checkInclusion(string s1, string s2) {
        int i,j,n,m,sig;
        n=s1.size();
        m=s2.size();
        if(m<n)
        return 0;
        memset(vis1,0,sizeof(vis1));
        memset(vis2,0,sizeof(vis2));
        for(i=0;i<s1.size();i++)
        vis1[s1[i]-'a']++;
        for(i=0;i<m;i++){
            if(i<n)
            vis2[s2[i]-'a']++;
            else{
                vis2[s2[i]-'a']++;
                vis2[s2[i-n]-'a']--;
            }
            sig=1;
            for(j=0;j<26;j++){
                if(vis2[j]<vis1[j]){
                    sig=0;
                    break;
                }
            }
            if(sig==1)
            return 1;
        }
        return 0;
    }
};
