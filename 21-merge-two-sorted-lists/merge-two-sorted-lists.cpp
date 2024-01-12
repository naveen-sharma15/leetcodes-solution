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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(left==NULL)
        {
            return right;
        }
        if(right==NULL)
        {
            return left;
        }
        ListNode* ans=new ListNode(-1);
        ListNode*temp=ans;
        while(left && right)
        {
            if(left->val<=right->val)
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        if(left)
        {
            temp->next=left;
        }
        if(right)
        {
            temp->next=right;
        }
        return ans->next;
    }
    
};