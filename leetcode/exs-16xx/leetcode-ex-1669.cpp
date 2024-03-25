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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
        ListNode *ans = list1;
        int i = 1;
        for (; i < a; i++) list1 = list1->next;
        ListNode *remove = list1->next;
        list1->next = list2;
        for (; i < b; i++) remove = remove->next;
        while (list2->next) list2 = list2->next;
        list2->next = remove->next;
        return ans;
    }
};