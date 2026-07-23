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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        vector<int>n(v.size());
        int i=0 , j=v.size()-1 , k=0;
        while(i<j){
            n[k++] = v[i++];
            n[k++] = v[j--];
        }
        if(v.size()==k+1) n[k]=(v[i]);
        int l=0;
        ListNode* t = head;
        while(t){
            t->val = n[l++];
            t = t->next;
        }
    }
};