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
    vector<int>soln;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            return soln;
        }
        if(root->left!=NULL)
        {
             inorderTraversal(root->left);
        }
        soln.push_back(root->val);
        cout<<root->val<<"\t";
        if(root->right!=NULL)
        {
            inorderTraversal(root->right);
        }
        
        //soln.push_back(root->left->val);

        return soln;
    }

};
