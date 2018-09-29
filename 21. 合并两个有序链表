//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p,*q;
        if(l2==NULL)
        return l1;
        if(l1==NULL)
        return l2;
        if(l1->val<l2->val){
            p=l1;
            l1=l1->next;
        }
        else{
            p=l2;
            l2=l2->next;
        }
        q=p;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<l2->val){
                q->next=l1;
                l1=l1->next;
            }
            else{
                q->next=l2;
                l2=l2->next;
            }
            q=q->next;
        }
        while(l1!=NULL){
            q->next=l1;
            l1=l1->next;
            q=q->next;
        }
        while(l2!=NULL){
            q->next=l2;
            l2=l2->next;
            q=q->next;
        }
        return p;
    }
};
