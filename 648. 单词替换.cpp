/*
 * @lc app=leetcode.cn id=648 lang=cpp
 *
 * [648] 单词替换
 */
class Solution {
public:
    int rt=0;
    int v[100005],tr[100005][30];
    void in(string s,int id){
        int i,u=0;
        for(i=0;s[i];i++){
            if(tr[u][s[i]-'a']==0)
            tr[u][s[i]-'a']=++rt;
            u=tr[u][s[i]-'a'];
        }
        v[u]=id;
    }
    int get(string s){
        int i,u=0;
        for(i=0;s[i];i++){
            u=tr[u][s[i]-'a'];
            if(v[u]!=-1)
            return v[u];
            if(u==0)
            return -1;
        }
        return -1;
    }
    string replaceWords(vector<string>& dict, string sentence) {
        int i,u;
        string ans,tmp;
        memset(v,-1,sizeof(v));
        memset(tr,0,sizeof(tr));
        for(i=0;i<dict.size();i++)
        in(dict[i],i);
        ans=tmp="";
        sentence+=' ';
        for(i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                u=get(tmp);
                if(u==-1)
                ans+=tmp;
                else
                ans+=dict[u];
                ans+=' ';
                tmp="";
            }
            else
            tmp+=sentence[i];
        }
        return ans.substr(0,ans.size()-1);
    }
};

