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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         return MergeByConquer(lists,0,lists.size()-1);
    }
    ListNode* MergeByConquer(vector<ListNode*>& lists,int low,int high){
        if(low > high)
            return nullptr;
        if(low==high)
            return lists[low];
        // divide step
        int mid = (low+high)/2;
        ListNode* left = MergeByConquer(lists,low,mid);
        ListNode* right = MergeByConquer(lists,mid+1,high);
        return merge(left,right);
    }
    
    ListNode* merge(ListNode* left,ListNode* right){
        // if(!left)
        //     return left;
        // if(!right)
        //     return right;
        ListNode* ret = new ListNode();
        ListNode* temp = ret;
        while(right &&left){
            if(left->val < right->val){
                temp->next = new ListNode(left->val);
                left = left->next;
            }
            else{
                temp->next = new ListNode(right->val);
                right = right->next;
            }
            temp = temp->next;
        }
        while(left){
            temp->next = new ListNode(left->val);
            left = left->next;
            temp = temp->next;
        }
        while(right){
            temp->next = new ListNode(right->val);
            right = right->next;
            temp = temp->next;
        }        
        return ret->next; 
    }

};