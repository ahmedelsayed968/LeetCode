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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* it = head;
        ListNode* prev = it;
        ListNode* head1 = head;
        int cur = it->val;
        while(it->next != nullptr && prev->next != nullptr){
            
            if(it->next->val != cur){
                prev = it;
                it = it->next;
                cur = it->val;
                
            }
            else{
                ListNode* deleteNode =it->next;
                it->next = deleteNode->next;
            
                delete deleteNode;
            }
        }
        return head1;
    }
};