/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int cnt=0,sum=0;
    struct ListNode *temp=head;
    while(temp !=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cnt=cnt-1;
    while(head!=NULL)    {
         sum= sum + head->val * pow(2,cnt);
         head=head->next;
         cnt--;
    }
   return sum;
}