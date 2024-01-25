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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*list=new ListNode();
        list->next=head;
        ListNode*prev=list;
        ListNode*curr=head;
        while(curr!=NULL)
        {
            if(curr->val!=val)
            {
                prev=curr;
                curr=curr->next;
            }
            else
            {
                prev->next=curr->next;
                curr=prev->next;
            }
        }
        return list->next;
    }
};
