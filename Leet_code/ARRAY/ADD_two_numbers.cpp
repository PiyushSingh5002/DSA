
class Solution {
public:
// this is going to be the linked list questionb
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode *Head = l3;
        int carry= 0 ;
        while(l1 && l2){
            int value = l1->val+l2->val+carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            int value = l1->val+carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3 = l3->next;
            l1 = l1->next;
        }
        while(l2){
            int value = l2->val+carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3 = l3->next;
            l2 = l2->next;
        }
        if(carry){
            l3->next = new ListNode(carry);
        }
        return Head->next;
    }
};