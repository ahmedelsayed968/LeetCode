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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return first_approach(head, n);
    }
    ListNode* first_approach(ListNode* head, int n){
        vector<ListNode*> nodes;
        ListNode* temp = head;
        while(temp) nodes.push_back(temp),temp =temp->next;
        int index = nodes.size()-n;
        ListNode* deletedNode = nodes[index];
        if(index==0)
            head = deletedNode->next;
        else{
            nodes[index-1]->next = nodes[index]->next;
        }
        delete deletedNode;
        return head;
    }
    
};