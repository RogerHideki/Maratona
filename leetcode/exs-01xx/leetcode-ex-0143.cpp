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
    void reorderList(ListNode *head) {
        ListNode *curHead = head;
        ListNode *prevHead;
        ListNode *fastHead = curHead;
        while (fastHead) {
            prevHead = curHead;
            curHead = curHead->next;
            if (!fastHead->next) break;
            fastHead = fastHead->next->next;
        }
        ListNode *backwardHead = prevHead = prevHead->next = nullptr;
        while (curHead) {
            backwardHead = curHead;
            curHead = curHead->next;
            backwardHead->next = prevHead;
            prevHead = backwardHead;
        }
        ListNode *forwardHead = curHead = head;
        while (forwardHead) {
            forwardHead = forwardHead->next;
            curHead = curHead->next = backwardHead;
            if (!backwardHead) break;
            backwardHead = backwardHead->next;
            curHead = curHead->next = forwardHead;
        }
    }
};