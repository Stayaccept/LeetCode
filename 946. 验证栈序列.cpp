class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j,u;
        stack<int> st;
        j=0;
        for(i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            u=st.top();
            if(u!=popped[j])
            continue;
            else{
                while(u==popped[j]){
                    j++;
                    st.pop();
                    if(st.size()==0)
                    break;
                    u=st.top();
                }
            }
        }
        while(j<popped.size()){
            if(st.size()==0)
            return 0;
            u=st.top();
            st.pop();
            if(u!=popped[j])
            return 0;
            j++;
        }
        return 1;
    }
};
