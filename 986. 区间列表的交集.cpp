/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> intervalIntersection(vector<Interval>& A, vector<Interval>& B){
        int i,j,u,v;
        vector<Interval> ans;
        ans.clear();
        i=j=0;
        while(i<A.size()&&j<B.size()){
            u=max(A[i].start,B[j].start);
            v=min(A[i].end,B[j].end);
            if(u<=v)
            ans.push_back(Interval(u,v));
            if(A[i].end<=B[j].end)
            i++;
            else
            j++;
        }
        return ans;
    }
};
