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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> values;
        ListNode* current = list1;
        // Collect values from first sorted list.
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }
        current = list2;
        // Collect values from second sorted list.
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }
        sort(values.begin(), values.end());
        ListNode dummy(0);
        ListNode* tail = &dummy;
        // Build merged linked list from sorted values.
        for (int value : values) {
            tail->next = new ListNode(value);
            tail = tail->next;
        }
        return dummy.next;
    }
};