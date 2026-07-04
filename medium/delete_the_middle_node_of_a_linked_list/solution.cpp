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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode *temp = head;
        int c=0;
        while(temp != NULL){
            c++;
            temp = temp->next;
        }
        int k=0;
        int d=c/2;
        ListNode *t = head;
        while(t){
            if(k==d-1) {
                t->next = t->next->next;
                break;
            }
            t = t->next;
            k++;
        }
        return head;
    }
};