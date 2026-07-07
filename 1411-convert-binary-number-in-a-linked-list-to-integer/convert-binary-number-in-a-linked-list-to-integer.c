/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <math.h>

int getDecimalValue(struct ListNode* head) {

    struct ListNode* temp = head;
    int count = -1;
    int ans = 0;

    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    struct ListNode* pos = head;

    while (pos != NULL) {
        int res = pos->val;
        ans += res * pow(2, count);
        pos = pos->next;
        count--;
    }

    return ans;
}