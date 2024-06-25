/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      queue<TreeNode*>q;
      vector<int>res;
      q.push(root);
      while(!q.empty())
      {
        int qlen=q.size();
        TreeNode*rightside=nullptr;
        for(int i=0;i<qlen;i++)
        {
            TreeNode* node=q.front();
            q.pop();
            if(node)
            {
                rightside=node;
                q.push(node->left);
                q.push(node->right);

            }
        }
        if(rightside)
        {
            res.push_back(rightside->val);
        }
      }
      return res;
    }
};
