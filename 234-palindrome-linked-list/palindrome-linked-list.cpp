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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        stack<int> arr;
        ListNode* current=head;
        while(current!=NULL){
            arr.push(current->val);
            current=current->next;
        }
        current=head;
        while(current!=NULL){
            if(current->val!=arr.top()){
                return false;
            }
            arr.pop();
            current=current->next;
        }
        return true;
    }
};