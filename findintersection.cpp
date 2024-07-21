/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   int length(ListNode*head)
   {
    int l=0;
     while(head!=NULL)
     {
        head=head->next;
        l++;
     }
     return l;
   }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
        {
            return NULL;
        }
        int lena=length(headA);
        int lenb=length(headB);
        if(lena>lenb)
        {
         while(lena>lenb)
           { 
            headA=headA->next;
            lena--;
            }
        }
        if(lenb>lena)
        {
            while(lenb>lena)
            {
                headB=headB->next;
                lenb--;
            }
        }
       while(headA && headB)
       { if(headA==headB)
        {
            return headA;
        }
        headA=headA->next;
        headB=headB->next;  
        }
        return NULL;
    }
};
