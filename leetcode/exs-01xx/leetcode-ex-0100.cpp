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
    bool dfs(TreeNode *p, TreeNode *q) {
        if ((!p && q) || (p && !q)) return false;
        if (!p) return true;
        if (p->val != q->val) return false;
        if (!dfs(p->left, q->left)) return false;
        return dfs(p->right, q->right);
    }

    bool isSameTree(TreeNode *p, TreeNode *q) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        return dfs(p, q);
    }
};