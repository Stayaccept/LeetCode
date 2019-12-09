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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    ListNode *p;
    Solution(ListNode* head) {
        p=head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int t,n=1,tmp;
        ListNode *q=p;
        while(q!=NULL){
            if(n==1)
            t=q->val;
            else{
                tmp=(int)rand()%n;
                if(tmp==0)
                t=q->val;
            }
            n++;
            q=q->next;
        }
        return t;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
