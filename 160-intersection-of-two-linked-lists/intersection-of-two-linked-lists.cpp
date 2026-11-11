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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //better approch
        unordered_set<ListNode*> seen;
        ListNode* first=headA;
        while(first!=NULL){
            seen.insert(first);
            first=first->next;
        }
        ListNode* second=headB;
        while(second!=NULL){
            if(seen.find(second)!=seen.end()){
                return second;
            }
            second=second->next;
        }
        return NULL;
    }
};