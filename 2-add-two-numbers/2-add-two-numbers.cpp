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
        ListNode* head = nullptr,*tail = nullptr;
        ListNode* a = l1,*b = l2;
        int sum = 0;
        int carry = 0;
        while(a && b){
            sum = a->val +b->val +carry;
            ListNode* newNode = new ListNode(sum%10);
            if(!head && !tail)
                head = tail = newNode;
            else{
                tail->next = newNode;
                tail = newNode;
            }
            carry = sum/10;
            a = a->next;
            b = b->next;
        }
        while(a){
            sum = a->val + carry;
            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;
            tail->next = newNode;
            tail = newNode;
            a = a->next;
        }
        while(b){
            sum = b->val + carry;
            ListNode* newNode = new ListNode(sum%10);
            carry = sum/10;
            tail->next = newNode;
            tail = newNode;
            b = b->next;
        }
        
        if(carry)
            tail->next = new ListNode(carry);
        return head;
    }
};