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
    void dfs(TreeNode *u, vector<int> &v) {
        if (!u->left && !u->right) {
            v.push_back(u->val);
            return;
        }
        if (u->left) dfs(u->left, v);
        if (u->right) dfs(u->right, v);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> leafValues1, leafValues2;
        dfs(root1, leafValues1);
        dfs(root2, leafValues2);
        return (leafValues1 == leafValues2) ? true : false;
    }
};