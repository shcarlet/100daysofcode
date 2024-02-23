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
    bool isPalindrome(ListNode* head) {
       if(head==NULL || head->next==NULL)
       {
           return (head);
       } 
       ListNode *rev=NULL;
       ListNode*ptr=head;
       while(ptr!=NULL)
       {
           ListNode*temp=new ListNode(ptr->val);
           temp->next=rev;
           rev=temp;
           ptr=ptr->next;
       }
       while(head && rev)
       {
           if(head->val!=rev->val)
           {
               return false;
           }
           head=head->next;
           rev=rev->next;
       }
       return true;
    }
};
