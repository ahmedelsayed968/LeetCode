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
    ListNode* middleNode(ListNode* head) {
        return approach_two(head);
    }
    ListNode* approach_one(ListNode* head){
        vector<ListNode*> nodes;
        ListNode*temp = head;
        while(temp) nodes.push_back(temp),temp = temp->next;
        int size = nodes.size();
        return nodes[size/2];
    }
    ListNode* approach_two(ListNode* head){
        ListNode* slow = head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        return slow;
        
    }
};