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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* even_head = head->next;
        ListNode* even = head->next;
        ListNode* odd = head;
        while(even && even->next){
            odd->next = odd->next->next;
            even->next = even->next->next;
            even = even->next;
            odd = odd->next;
        }
        odd->next = even_head;
        return head;
    }
};