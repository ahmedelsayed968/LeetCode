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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1,st2;
        ListNode* temp1 = l1,*temp2 = l2;
        while(temp1) 
            st1.push(temp1->val),temp1 = temp1->next;
        while(temp2) 
            st2.push(temp2->val),temp2 = temp2->next;
        
        int sum = 0,carry = 0;
        ListNode* head = nullptr;
        while(!st1.empty() && !st2.empty()){
            sum  = st1.top()+st2.top()+carry;
            ListNode* newNode = new ListNode(sum%10);
            if(!head)
                head = newNode;
            else{
                newNode->next = head;
                head = newNode;
            }
            carry = sum/10;
            st1.pop();
            st2.pop();
        }
        while(!st1.empty()){
            sum = carry+st1.top();
            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;
            newNode->next = head;
            head = newNode;
            st1.pop();
        }
        while(!st2.empty()){
            sum = carry+st2.top();
            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;
            newNode->next = head;
            head = newNode;
            st2.pop();
        }
        if(carry)
        {
            ListNode* newNode = new ListNode(carry);
            newNode->next = head;
            head = newNode;
        }
        return head;
        
        
    }
};