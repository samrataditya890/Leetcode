/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         unordered_set<ListNode*> seen;
        ListNode* current=head;
        while(current!=NULL){
            if(seen.find(current)!=seen.end()){
                return current;
            }
            seen.insert(current);
            current=current->next;
        }
        return NULL;
    }
};