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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return NULL;
        }
       int count=0,result;
       ListNode*temp=head;
       ListNode*newhead;
       while(temp!=NULL)
       {
           count++;
           temp=temp->next;
       }
       if(count==n)
       {
           newhead=head->next;
           delete(head);
           return newhead;
       } 
     
       result=count-n;
       temp=head;
       while(temp!=NULL)
       {
           result--;
           if(result==0)
           {
               break;
           }
           temp=temp->next;
       }
       ListNode* curr=temp->next;
       temp->next=temp->next->next;
       delete(curr);
       return head;

    }
};
