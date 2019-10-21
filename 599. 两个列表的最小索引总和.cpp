class Solution {
public:
    map<string,int> mp1;
    map<string,int> mp2;
    map<string,int>::iterator ite;
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int i,ans;
        int INF=0x3f3f3f3f;
        vector<string> G;
        mp1.clear();
        mp2.clear();
        ans=INF;
        for(i=0;i<list1.size();i++)
        mp1[list1[i]]=i+1;
        for(i=0;i<list2.size();i++){
            mp2[list2[i]]=i+1;
            if(mp1[list2[i]]!=0){
                ans=min(ans,mp1[list2[i]]+(i+1));
            }
        }
        for(i=0;i<list1.size();i++){
            if(mp2[list1[i]]!=0&&i+1+mp2[list1[i]]==ans)
            G.push_back(list1[i]);
        }
        return G;
    }
};
