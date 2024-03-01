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
    bool isEvenOddTree(TreeNode *root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (!(root->val & 1)) return false;
        queue<pair<TreeNode *, int>> q;
        q.emplace(root, 0);
        int maxLevel = 1;
        int prev = 1000001;
        while (!q.empty()) {
            auto [u, level] = q.front();
            q.pop();
            if (maxLevel == level) {
                maxLevel = level + 1;
                prev = ((maxLevel & 1) ? 1000001 : 0);
            }
            if (u->left) {
                int val = u->left->val;
                if ((prev == val) || ((prev < val) == (maxLevel & 1))) return false;
                if ((u->left->val & 1) == (maxLevel & 1)) return false;
                prev = val;
                q.emplace(u->left, level + 1);
            }
            if (!u->right) continue;
            int val = u->right->val;
            if ((prev == val) || ((prev < val) == (maxLevel & 1))) return false;
            if ((u->right->val & 1) == (maxLevel & 1)) return false;
            prev = val;
            q.emplace(u->right, level + 1);
        }
        return true;
    }
};