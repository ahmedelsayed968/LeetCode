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
    ListNode* rotateRight(ListNode* head, int k) {
        stack<ListNode*> stNodes;
        int size = 0;
        ListNode* temp = head;
        while(temp){
            size++;
            stNodes.push(temp);
            temp = temp->next;
        }
        if(size == 0)
            return head;
        int pops = k%size;
        if(pops == 0)
            return head;
        
        for(int i = 0;i < pops;i++){
            // deletedNode = nullptr;
            ListNode* deletedNode = stNodes.top();
            ListNode* pushed = new ListNode(deletedNode->val);
            pushed->next = head;
            head = pushed;
            
            stNodes.pop();
            delete deletedNode;
            deletedNode = nullptr;
            stNodes.top()->next = NULL;
            
        }
        return head;
    }
};