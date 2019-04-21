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
    ListNode* middleNode(ListNode* head) {
        ListNode *p,*q;
        p=q=head;
        while(q!=NULL&&q->next!=NULL){
            p=p->next;
            q=q->next->next;
        }
        return p;
    }
};
