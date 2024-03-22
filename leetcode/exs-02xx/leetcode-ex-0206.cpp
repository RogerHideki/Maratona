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
int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *prev = nullptr;
        ListNode *ans = nullptr;
        while (head) {
            ans = head;
            head = head->next;
            ans->next = prev;
            prev = ans;
        }
        return ans;
    }
};