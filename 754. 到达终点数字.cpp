class Solution {
public:
    int reachNumber(int target) {
        int i,u,ans;
        target=abs(target);
        u=0;
        for(i=1;;i++){
            u+=i;
            if(u>=target)
            break;
        }
        cout<<u<<" "<<i<<endl;
        if((target-u)%2==0)
        return i;
        else{
            if(i%2==0)
            return i+1;
            else
            return i+2;
        }
    }
};
