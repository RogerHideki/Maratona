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
    int low, high;

    int dfs(TreeNode *u) {
        int ans = 0;
        if (u->left) ans += dfs(u->left);
        if (u->right) ans += dfs(u->right);
        if (low <= u->val && u->val <= high) ans += u->val;
        return ans;
    }

    int rangeSumBST(TreeNode *root, int low, int high) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->low = low;
        this->high = high;
        return dfs(root);
    }
};