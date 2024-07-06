class Solution {
public:
    void insert_tail(ListNode* &head, ListNode* &tail, int val) {
        ListNode* newNode = new ListNode(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void reverse(ListNode* &head, ListNode* cur) {
        if(cur->next == NULL) {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        ListNode* temp = head;
        while(temp!=NULL) {
            insert_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reverse(newHead, newHead);
        temp = head;
        ListNode* temp2 = newHead;
        while(temp!=NULL) {
            if(temp->val != temp2->val) {
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};