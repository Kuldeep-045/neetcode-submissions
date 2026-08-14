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
    int lengthOfList(ListNode* head){
        if(!head)return 0;
        return 1+lengthOfList(head->next);
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = lengthOfList(head)-n;
        if(length==0)return head->next;
        // cout<<length-n;
        ListNode* node= head;
        while(length>1){
            node=node->next;
            cout<<node->val<<" ";
            length--;
        }
        if(!node->next)node->next=NULL;
        else node->next=node->next->next;
        return head;
        
    }
};
