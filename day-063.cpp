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
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        //splitting ll
        ListNode*second=slow->next;
        ListNode*prev=NULL;
        slow->next=NULL;
        while(second!=NULL)                 //reversing the second half
        {
            ListNode*temp=second->next;
            second->next=prev;
            prev=second;
            second=temp;
        }

        //merging two list
        second=prev; //to find the begining of the second part
        ListNode*first=head;
       
        while(second!=NULL)  //second part will be smaller than first
        {
            ListNode*temp1=first->next;       
            ListNode*temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;         // 1->2->3->|| 4->5->6
        }                                 //  ||6->5->4
    }                              // 1->6->2
};
