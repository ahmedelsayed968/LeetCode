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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode* headOdd = head,*tailOdd = head,*headEven = head->next,*tailEven = head->next;
        while(tailOdd && tailEven){
            if(tailOdd->next == tailEven){
                if(tailEven->next != nullptr){
                    tailOdd->next = tailEven->next;
                    tailOdd = tailOdd->next;
                }
                else{
                    tailOdd->next = nullptr;
                    break;
                }
            }
            else if(tailEven->next = tailOdd){
                if(tailOdd->next != nullptr){
                    tailEven->next = tailOdd->next;
                    tailEven = tailEven->next;
                }
                else{
                    tailEven->next = nullptr;
                    break;
                }
            }
        }
        
        tailOdd->next = headEven;
        return headOdd;
    }
};