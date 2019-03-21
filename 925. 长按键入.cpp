class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i,j,n,m;
        n=name.size();
        m=typed.size();
        if(name[0]!=typed[0])
        return 0;
        i=j=1;
        while(i<n){
            if(name[i]!=typed[j]){
                if(typed[j]==name[i-1])
                j++;
                else
                return 0;
            }
            else
            i++,j++;
            if(i!=n&&j==m)
            return 0;
        }
        return 1;
    }
};
