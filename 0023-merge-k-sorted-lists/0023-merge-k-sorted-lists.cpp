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
    ListNode* mergeKLists(vector<ListNode*>& l) {
        vector<int>v;
        for(ListNode* t : l){
            while(t){
                v.push_back(t->val);
                t = t->next;
            }
        }
        if(v.empty()) return NULL;
        sort(v.begin(),v.end());
        ListNode* h = new ListNode(v[0]);
        ListNode* t = h;
        for(int i=1;i<v.size();i++){
            t->next = new ListNode(v[i]);
            t = t->next;
        }
        return h;
    }
};