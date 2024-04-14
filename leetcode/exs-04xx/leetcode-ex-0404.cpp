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
int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int ans = 0;

    void dfs(TreeNode *u, bool isLeft) {
        if (u->left) dfs(u->left, true);
        if (u->right) return dfs(u->right, false);
        if (!u->left && isLeft) ans += u->val;
    }

    int sumOfLeftLeaves(TreeNode *root) {
        dfs(root, false);
        return ans;
    }
};