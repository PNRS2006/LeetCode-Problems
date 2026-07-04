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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int>v;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=v.size()-2;i>=0;i--){
            if(v[i+1]>v[i]) v.erase(v.begin()+i);
        }
        ListNode *h = new ListNode(v[0]);
        ListNode* t = h;
        for(int i=1;i<v.size();i++){
            t->next = new ListNode(v[i]);
            t = t->next;
        }
        return h;
    }
};