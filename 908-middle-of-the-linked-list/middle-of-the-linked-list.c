/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp=head;
    struct ListNode* pos=head;
    int count=0;
    while(temp!=NULL) {
        temp=temp->next;
        count++;
    }
    int a=count/2;

    while(a>0) {
        pos=pos->next;
        a--;       
    }
    return pos;
    
}