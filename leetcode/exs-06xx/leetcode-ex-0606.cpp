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
    string ans = "";

    void f(TreeNode *node) {
        ans += to_string(node->val);
        if (node->left != nullptr) {
            ans += "(";
            f(node->left);
            ans += ")";
        }
        if (node->right != nullptr) {
            if (node->left == nullptr) ans += "()";
            ans += "(";
            f(node->right);
            ans += ")";
        }
    }

    string tree2str(TreeNode *root) {
        f(root);
        return ans;
    }
};