class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int i;
        set<int> se;
        for(i=0;i<candies.size();i++)
        se.insert(candies[i]);
        return min(se.size(),candies.size()/2);
    }
};
