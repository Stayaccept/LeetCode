class Solution {
public:
    stack<int> sta;
    vector<int> asteroidCollision(vector<int>& S) {
        int i,u,n;
        vector<int> ans;
        n=S.size();
        for(i=0;i<n;i++){
            if(sta.size()==0)
            sta.push(S[i]);
            else{
                while(sta.size()){
                    u=sta.top();
                    if(u>0&&S[i]<0){
                        if(abs(u)>abs(S[i]))
                        goto next;
                        else if(abs(u)<abs(S[i]))
                        sta.pop();
                        else{
                            sta.pop();
                            goto next;
                        }
                    }
                    else{
                        sta.push(S[i]);
                        goto next;
                    }
                }
                sta.push(S[i]);
                next:;
            }
        }
        ans.clear();
        while(sta.size()){
            ans.push_back(sta.top());
            sta.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
