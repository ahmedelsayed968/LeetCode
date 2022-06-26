/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* it = head;
        while(it){
            if(it->val == 1e6)
                return true;
            it->val = 1e6;
            it = it->next;

        }
        return false;
    }
};