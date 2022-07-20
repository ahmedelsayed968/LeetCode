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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // first stacking
        
        if(left==right )
            return head;
        stack<int>st;
        ListNode* temp = head;
        int ct = 1;
        ListNode* startPoint= head;
        ListNode* endPoint = head;
        while(temp){
            if(ct == left)
                startPoint = temp;
            if(ct == right)
                {endPoint = temp;st.push(temp->val);break;}
            if(ct >=left && ct < right)
                st.push(temp->val);
            ct++;
            temp = temp->next;
        }
        
        // second if left ==1 -> head must be changed
        /*if(left==1)
        {
            head = nullptr;
            head = st.top();
            startPoint = head;
            st.pop();
           
        }*/
         while(!st.empty()){
                startPoint->val = st.top();
                st.pop();
                startPoint = startPoint->next;
                
            }
            
        
        return head;
    }
};