//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *p,*q;
        if(head==NULL||head->next==NULL)
        return head;
        p=head;
        q=p->next;
        p->next=q->next;
        q->next=p;
        head=q;
        while(1){
            q=p->next;
            if(q==NULL||q->next==NULL)
            return head;
            p->next=q->next;
            q->next=q->next->next;
            p->next->next=q;
            p=p->next->next;
        }
    }
};
