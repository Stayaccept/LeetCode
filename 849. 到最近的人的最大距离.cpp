class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int i,u,n,m;
        vector<int> tmp;
        for(i=0;i<seats.size();i++)
        if(seats[i]==1)
        tmp.push_back(i);
        n=tmp.size();
        m=seats.size();
        u=max(tmp[0],m-1-tmp[n-1]);
        for(i=0;i+1<n;i++)
        u=max(u,(tmp[i+1]-tmp[i])/2);
        return u;
    }
};
