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
    ListNode* sortList(ListNode* head) {
        vector<int> values;
        ListNode* current = head;
 
        // Collect every node value inside an array.
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }
 
        sort(values.begin(), values.end());
 
        current = head;
        int index = 0;
 
        // Write sorted values back into existing nodes.
        while (current != nullptr) {
            current->val = values[index];
            index++;
            current = current->next;
        }
 
        return head;
    }
};