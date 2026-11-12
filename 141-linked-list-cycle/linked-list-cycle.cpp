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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> seen;

        ListNode* current=head;
        while(current!=NULL){
            if(seen.find(current)!=seen.end()){
                return true;
            }
            seen.insert(current);
            current=current->next;
        }
        return false;
    }
};