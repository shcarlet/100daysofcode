/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        map<Node*,Node*>oldtocopy;
        return dfs(node,oldtocopy);
    }
    private:
      Node*dfs(Node*node,map<Node*,Node*>& oldtocopy)
      {
        if(node==nullptr)
        {
            return nullptr; 
        }
        if(oldtocopy.count(node))
        {
            return oldtocopy[node];
        }
        Node*copy=new Node(node->val);
        oldtocopy[node]=copy;
        for(Node*neigh:node->neighbors)
        {
            copy->neighbors.push_back(dfs(neigh,oldtocopy));
        }
        return copy;
      }
};








