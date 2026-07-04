/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        if(k>len || k==len-k+1) return head;
        
        int a = len-k+1;
        int a1 , a2;

        temp = head;
        for(int i=1;i<=len;i++){
            if(i == k) a1 = temp->val;
            if(i == a) a2 = temp->val;
            temp = temp->next;
        }

        temp = head;
        for(int i=1;i<=len;i++){
            if(i == k) temp->val = a2;
            if(i == a) temp->val = a1;
            temp = temp->next;
        }

        return head;
    }
};