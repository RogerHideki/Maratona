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
    ListNode *middleNode(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode *fastHead = head;
        while (fastHead && fastHead->next) {
            head = head->next;
            fastHead = fastHead->next->next;
        }
        return head;
    }
};