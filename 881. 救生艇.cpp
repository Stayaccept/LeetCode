class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i,j,n,ans;
        n=people.size();
        sort(people.begin(),people.end());
        i=0,j=n-1,ans=0;
        while(i<=j){
            ans++;
            if(people[i]+people[j]<=limit)
            i++,j--;
            else
            j--;
        }
        return ans;
    }
};
