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
    void reverseNow(ListNode* left,ListNode* curr,ListNode* &head)
    {
        if(curr==NULL)
        {
          head=left;
          return;
        }
        ListNode*right=curr->next;
        curr->next=left;
        left=curr;
        curr=right;
        reverseNow(left,curr,head);
       
    }

    ListNode* reverseList(ListNode* head) {
        ListNode*left=NULL;
        ListNode*curr=head;
        reverseNow(left,curr,head);
        return head;


    }
};