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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        if(head == NULL){
            return NULL;
        }

        int k = count - n + 1;

        // Remove head
        if(k == 1){
            return head->next;
        }

        ListNode* temp2 = head->next;
        ListNode* prev = head;

        int i = 2;

        while(temp2 != NULL){

            if(i == k){
                prev->next = temp2->next;
                break;
            }
            else{
                prev = temp2;
                temp2 = temp2->next;
            }

            i++;
        }

        return head;
    }
};