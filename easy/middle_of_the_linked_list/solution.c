/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int get_node_count(struct ListNode* head)
 {
    struct ListNode *temp = head;
    int c=0;
    while(temp != 0)
    {
        temp = temp->next;
        c++;
    }
    return c;
 }
struct ListNode* middleNode(struct ListNode* head) {
    int n=get_node_count(head)/2;
    struct ListNode *temp = head;
    while(n--)
    {
        temp = temp->next;
    }
    return temp;
}