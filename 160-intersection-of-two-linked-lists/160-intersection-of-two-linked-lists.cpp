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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> freq;
        ListNode* temp = headA;
        while(temp) freq[temp]++,temp = temp->next;
        
        ListNode* temp2 = headB;
        while(temp2){
            freq[temp2]++;
            if(freq[temp2]==2)
                return temp2;
            temp2 = temp2->next;
        }
        return NULL;
        
        
    }
};