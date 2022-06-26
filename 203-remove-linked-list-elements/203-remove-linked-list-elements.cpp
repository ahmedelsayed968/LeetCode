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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*it = head;
        ListNode*prev = head;
        while(it != nullptr && prev != nullptr){
            if(it->val != val)
            {   
                prev = it;
                it = it->next;
            }
            else{
                if(it==prev){
                    
                    ListNode* deleteNode = it;
                    prev = prev->next;
                    it = it->next;
                    if(head == deleteNode)
                        head = it;
                    delete deleteNode;
                        
                }
                else{
                    ListNode* deleteNode = it;
                    it = it->next;
                    prev->next = deleteNode->next;
                    delete deleteNode;
                }
            }
        }
        return head;
    }
};