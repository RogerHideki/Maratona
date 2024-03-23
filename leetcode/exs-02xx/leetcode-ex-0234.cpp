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
    bool isPalindrome(ListNode *head) {
        ListNode *prev = nullptr;
        ListNode *backwardHead = nullptr;
        ListNode *fastHead = head;
        while (fastHead->next) {
            backwardHead = head;
            head = head->next;
            fastHead = fastHead->next->next;
            backwardHead->next = prev;
            if (!fastHead) break;
            prev = backwardHead;
        }
        if (fastHead && !fastHead->next) head = head->next;
        while (backwardHead) {
            if (backwardHead->val != head->val) return false;
            backwardHead = backwardHead->next;
            head = head->next;
        }
        return true;
    }
};