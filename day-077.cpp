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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>stack;
        TreeNode*cur=root;
        while(cur!=NULL || !stack.empty())
        {
            while(cur!=NULL)
            {
                stack.push(cur);
                cur=cur->left;
            }
            cur=stack.top();
            stack.pop();
            k--;
            if(k==0)
            {
                return cur->val;
            }
            cur=cur->right;
        }
        return -1;
    }
};
