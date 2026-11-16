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
    ListNode* rotateRight(ListNode* head, int k) {
          // Handle empty list, single node, or zero rotations
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
 
        int length = 0;
        ListNode* temp = head;
 
        // Calculate total length of the list
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
 
        // Remove redundant full cycles
        k = k % length;
 
        // Rotate the list one node at a time
        while (k > 0) {
            ListNode* secondLast = nullptr;
            ListNode* last = head;
 
            // Traverse to the end of the list
            while (last->next != nullptr) {
                secondLast = last;
                last = last->next;
            }
 
            // Move the last node to the front
            secondLast->next = nullptr;
            last->next = head;
            head = last;
            k--;
        }
 
        return head;
    }
};