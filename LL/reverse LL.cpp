class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = null;
        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
        }
        return prev;
    }
};