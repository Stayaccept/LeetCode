//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p1,*p2;
        p1=p2=head;
        while(n>0&&p2->next!=NULL){
            p2=p2->next;
            n--;
        }
        if(p2->next==NULL&&n!=0)
        return head->next;
        while(p2->next!=NULL){
            p1=p1->next;
            p2=p2->next;
        }
        p2=p1->next;
        if(p2!=NULL)
        p1->next=p2->next;
        return head;
    }
};
