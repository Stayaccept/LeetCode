/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    map<int,int> mp;
    int numComponents(ListNode* head, vector<int>& G) {
        int i,ans,tmp;
        ListNode* p;
        mp.clear();
        for(i=0;i<G.size();i++)
        mp[G[i]]=1;
        ans=tmp=0;
        while(head!=NULL){
            if(mp[head->val]!=0)
            tmp++;
            else{
                if(tmp!=0)
                ans++;
                tmp=0;
            }
            head=head->next;
        }
        if(tmp!=0)
        ans++;
        return ans;
    }
};
