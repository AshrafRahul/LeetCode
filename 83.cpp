class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* temp = head;
        while(temp->next != NULL) {
            if(temp->val == temp->next->val) {
                temp->next = temp->next->next;
            }
            if(temp->next == NULL) break;
            else if(temp->val != temp->next->val) temp = temp->next;
        }
        return head;
    }
};