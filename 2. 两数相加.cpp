class Solution {
public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2){
        int u,v;
        ListNode *op,*tmp,*res;
        v=0,tmp=NULL;
        while(l1!=NULL&&l2!=NULL){
            op=new ListNode((l1->val+l2->val+v)%10);
            v=(l1->val+l2->val+v)/10;
            if(tmp==NULL)
            res=tmp=op;
            else{
                tmp->next=op;
                tmp=tmp->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            op=new ListNode((l1->val+v)%10);
            v=(l1->val+v)/10;
            tmp->next=op;
            tmp=tmp->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            op=new ListNode((l2->val+v)%10);
            v=(l2->val+v)/10;
            tmp->next=op;
            tmp=tmp->next;
            l2=l2->next;
        }
        if(v!=0){
            op=new ListNode(v);
            tmp->next=op;
            tmp=tmp->next;
        }
        return res;
    }
};
