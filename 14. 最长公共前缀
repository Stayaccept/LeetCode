class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,u,v,ans;
        if(strs.size()==0)
        return "";
        ans=strs[0].size();
        for(i=1;i<strs.size();i++){
            u=strs[i].size(),v=strs[i-1].size();
            for(j=0;j<u&&j<v;j++){
                if(strs[i][j]!=strs[i-1][j]){
                    ans=min(ans,j);
                    break;
                }
            }
            if(j==min(u,v))
            ans=min(ans,j);
        }
        return strs[0].substr(0,ans);
    }
};
