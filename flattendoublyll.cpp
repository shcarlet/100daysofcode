/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node*temp=head;
        while(temp!=NULL)
        {
            if(temp->child!=NULL)
            {
                Node*next=temp->next;
                temp->next=temp->child;
                temp->next->prev=temp;
                temp->child=NULL;
                Node*runchild=temp->next;
                while(runchild->next)
                {
                    runchild=runchild->next;
                }
                runchild->next=next;
                if(runchild->next)
                {
                    runchild->next->prev=runchild;
                }
            }
            temp=temp->next;
        }
        return head;
    }
};
