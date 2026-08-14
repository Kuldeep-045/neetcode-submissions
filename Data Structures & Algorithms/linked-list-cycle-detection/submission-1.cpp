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
    bool hasCycle(ListNode* head) {
        if(!head or !head->next)return false;
        auto slow= head;
        auto fast= head->next;
        while(slow and fast->next){
            if(slow==fast)return true;
            slow= slow->next;
            fast=fast->next;
            if(!fast->next)break;
            fast=fast->next;
        }
        return false;
    }
};
