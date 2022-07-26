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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1)
            return head;
        if(!head->next)
            return head;
        
        ListNode* prev = head;
        ListNode* temp = head;
        stack<ListNode*> nodes;
  
        while(temp){
            if(nodes.size()==k){
                ListNode* nextNode = nodes.top()->next;
                if(prev == head){
                    head = nodes.top();
                    prev = head;
                    nodes.pop();        
                }
               
                while(!nodes.empty()){
                    prev->next= nodes.top();
                    prev = nodes.top();
                    nodes.pop();
                }
                prev->next = nextNode;
                
            }
            else{
                nodes.push(temp);
                temp = temp->next;
            }
            
        }
        if(!nodes.empty() && nodes.size()==k){
            if(prev == head){
                    head = nodes.top();
                    prev = head;
                    nodes.pop();        
                }
               
                while(!nodes.empty()){
                    prev->next= nodes.top();
                    prev = nodes.top();
                    nodes.pop();
                }
                prev->next = nullptr;
        }
        
        return head;
    }
};