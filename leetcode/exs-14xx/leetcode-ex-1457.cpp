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
    int ans = 0;

    void dfs(TreeNode *u, int hash) {
        hash ^= (1 << u->val);
        if (!u->left && !u->right) {
            if (!(hash & (hash - 1))) ans++;
            return;
        }
        if (u->left) dfs(u->left, hash);
        if (u->right) dfs(u->right, hash);
    }

    int pseudoPalindromicPaths(TreeNode *root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        dfs(root, 0);
        return ans;
    }
};