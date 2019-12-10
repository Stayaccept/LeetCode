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
    bool hasCycle(ListNode *head) {
        ListNode *st,*en;
        if(head==NULL||head->next==NULL)
        return 0;
        en=head->next;
        st=head->next->next;
        while(st!=en){
            if(st==NULL||st->next==NULL)
            return 0;
            en=en->next;
            st=st->next->next;
        }
        return 1;
    }
};
