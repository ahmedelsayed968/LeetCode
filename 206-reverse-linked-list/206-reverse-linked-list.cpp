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
    ListNode* reverseList(ListNode* head) {
        ListNode* ptrHead2 = NULL;
        while(head != nullptr){
            if(ptrHead2 == NULL){
                ptrHead2 = new ListNode(head->val);
                head = head->next;
            }
            else{
                ListNode* prev = head ;
                head = head->next;
                prev->next= ptrHead2;
                ptrHead2 = prev;
                
            }
            

        }
        return ptrHead2;
    }
    
};
