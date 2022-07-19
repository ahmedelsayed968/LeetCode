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
    void deleteNode(ListNode* node) {
        // shifting the node->val until the end of the list and delete it
        ListNode* temp1 = node;
        ListNode* temp2 = node->next;
        while(1){
            swap(temp1->val,temp2->val);
            if(temp2->next==NULL)
            {
                temp1->next = temp2->next;
                delete temp2;
                break;
            }
            else
                temp2 = temp2->next;
            
            temp1  = temp1->next;
           
            
                
        }
        
        
    }
};