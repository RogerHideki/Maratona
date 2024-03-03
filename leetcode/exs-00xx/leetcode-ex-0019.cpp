/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int n;

    int f(ListNode *u) {
        int i = ((u->next) ? f(u->next) : 0);
        if (i == n) u->next = u->next->next;
        return i + 1;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->n = n;
        ListNode node(0, head);
        ListNode *ans = &node;
        f(ans);
        return ans->next;
    }
};