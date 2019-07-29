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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int i,j,u,v,len,sig;
        ListNode *p;
        vector<ListNode*> ans;
        len=0,p=root;
        while(p!=NULL){
            len++;
            p=p->next;
        }
        u=len/k,v=len%k;
        for(i=0;i<k;i++){
            if(root==NULL){
                ans.push_back(NULL);
                continue;
            }
            sig=0;
            for(j=1;j<=u;j++){
                if(j==1){
                    sig=1;
                    ans.push_back(root);
                }
                root=root->next;
            }
            if(i+1<=v){
                if(sig==0)
                ans.push_back(root);
                root=root->next;
            }
        }
        for(i=0;i+1<ans.size();i++){
            if(ans[i]==NULL)
            continue;
            p=ans[i];
            while(1){
                if(p->next==ans[i+1]){
                    p->next=NULL;
                    break;
                }
                p=p->next;
            }
        }
        return ans;
    }
};
