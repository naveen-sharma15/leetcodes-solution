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
     ListNode* rev(ListNode* head)
    {
       ListNode* left=NULL;
       ListNode* curr=head;
       ListNode* right=curr->next;
       while(curr!=NULL)
       {
        right=curr->next;
        curr->next=left;
        left=curr;
        curr=right;
       }
       return left;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
        {
            return false;
        }
        if(head->next==NULL)
        {
            return true;
        }
         ListNode* slow=head;
         ListNode* fast=head->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
         ListNode* revKahead=rev(slow->next);
         ListNode*temp1=head;
         ListNode*temp2=revKahead;
         while(temp2!=NULL)
         {
             if(temp1->val!=temp2->val)
             {
                 return false;
             }
             temp1=temp1->next;
             temp2=temp2->next;
         }
         return true;
    }
};