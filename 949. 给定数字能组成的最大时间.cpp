class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int i,j,k,sig;
        int vis[15],tmp[15];
        string s="";
        memset(vis,0,sizeof(vis));
        for(i=0;i<A.size();i++)
        vis[A[i]]++;
        for(i=23;i>=0;i--){
            for(j=59;j>=0;j--){
                memset(tmp,0,sizeof(tmp));
                tmp[i%10]++,tmp[i/10]++;
                tmp[j%10]++,tmp[j/10]++;
                sig=0;
                for(k=0;k<10;k++)
                if(tmp[k]!=vis[k])
                sig=1;
                if(sig==0){
                    s+=('0'+i/10);
                    s+=('0'+i%10);
                    s+=(':');
                    s+=('0'+j/10);
                    s+=('0'+j%10);
                    return s;
                }
            }
        }
        return s;
    }
};
