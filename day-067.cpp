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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode();
        ListNode*cur=dummy;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0)
        {
            int v1=(l1!=NULL)?l1->val:0;
            int v2=(l2!=NULL)?l2->val:0;

            int val=v1+v2+carry;
            carry=val/10;
            val=val%10;
            cur->next=new ListNode(val);

            cur=cur->next;

            if(l1!=nullptr)
            {
                l1=l1->next;
            }
            else
            {
                l1=nullptr;
            }
            if(l2!=nullptr)
            {
                l2=l2->next;
            }
            else
            {
                l2=nullptr;
            }
        }
        return dummy->next;
    }
    
};
