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
    int pairSum(ListNode* head) {
        int m=0;
        ListNode *temp = head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i=0 , j=v.size()-1;
        while(i<j) m = max(m,v[i++]+v[j--]);
        return m;
    }
};