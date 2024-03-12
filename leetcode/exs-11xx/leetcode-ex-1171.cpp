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
    ListNode *removeZeroSumSublists(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode ans = ListNode(0, head);
        int prefixSum = 0;
        map<int, ListNode *> m;
        for (ListNode *ptr = &ans; ptr; ptr = ptr->next) {
            prefixSum += (ptr->val);
            m[prefixSum] = ptr;
        }
        prefixSum = 0;
        for (ListNode *ptr = &ans; ptr; ptr = ptr->next) {
            prefixSum += (ptr->val);
            ptr->next = m[prefixSum]->next;
        }
        return ans.next;
    }
};