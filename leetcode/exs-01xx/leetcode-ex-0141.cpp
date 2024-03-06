/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode *fastHead = head;
        while (fastHead && fastHead->next) {
            head = head->next;
            fastHead = fastHead->next->next;
            if (head == fastHead) return true;
        }
        return false;
    }
};