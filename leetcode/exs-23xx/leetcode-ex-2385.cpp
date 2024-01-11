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
    vector <vector<int>> graph = vector < vector < int >> (100001);
    vector<int> dist = vector<int>(100001, -1);

    void dfs(TreeNode *u) {
        if (u->left) {
            graph[u->val].emplace_back(u->left->val);
            graph[u->left->val].emplace_back(u->val);
            dfs(u->left);
        }
        if (u->right) {
            graph[u->val].emplace_back(u->right->val);
            graph[u->right->val].emplace_back(u->val);
            dfs(u->right);
        }
    }

    int bfs(int u) {
        dist[u] = 0;
        queue<int> q;
        q.push(u);
        while (!q.empty()) {
            u = q.front();
            q.pop();
            for (auto &v: graph[u]) {
                if (dist[v] != -1) continue;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
        return dist[u];
    }

    int amountOfTime(TreeNode *root, int start) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        dfs(root);
        return bfs(start);
    }
};