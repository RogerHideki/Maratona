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
    int dfs(TreeNode *u, int a, int b) {
        a = max(u->val, a);
        b = min(u->val, b);
        if (!u->left && !u->right) return a - b;
        int ans = 0;
        if (u->left) ans = dfs(u->left, a, b);
        if (u->right) ans = max(ans, dfs(u->right, a, b));
        return ans;
    }

    int maxAncestorDiff(TreeNode *root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        return dfs(root, 0, 100000);
    }
};