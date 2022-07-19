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
        
        
        return approach_2(headA, headB);
    }
    
    ListNode * approach_1(ListNode *headA, ListNode *headB){
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
    ListNode * approach_2(ListNode *headA, ListNode *headB){
        // they will intersect on 3 cases only
        // 1) skipped values are equal then -> ptr1 == ptr2 at some point
        // 2) skipped values of 1 < skipped 2 then ptr1 == ptr2->next at some point
        // 3) skipped values of 1 > skipped 2 then ptr2 == ptr1->next at some point
        ListNode *ptr1 = headA;
        ListNode *ptr2 =headB;
        while(ptr1 != ptr2){
            if(ptr1 !=NULL && ptr2 !=NULL){
                if(ptr1 == ptr2->next)
                    return ptr1;
                else if(ptr2 == ptr1->next)
                    return ptr2;
                
            }
            if(!ptr1){
                ptr1 = headB;
            }
            else
                ptr1 = ptr1->next;
            if(!ptr2)
                ptr2 = headA;    
            else
                ptr2 = ptr2->next;
            
            
            
        }
        return ptr1;
        
    }
    
};