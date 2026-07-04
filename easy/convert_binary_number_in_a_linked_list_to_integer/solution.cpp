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
    int getDecimalValue(ListNode* head) {
        int c=0,s=0;
        struct ListNode *temp = head;
        while(temp!=0)
        {
            c++;
            temp=temp->next;
        }
        c=c-1;
        while(head!=NULL)
        {
            s=s+pow(2,c)*head->val;
            head=head->next;
            c--;
        }
        return s;
    }
};