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
    int getDecimalValue(ListNode* head) {
        ListNode* temp =head;
        int count=-1;
        int ans=0;
        while(temp!=NULL) {
            temp=temp->next;
            count++;
        }
        ListNode* pos=head;
        while(pos!=NULL) {
            int res = pos->val;
            pos=pos->next;
            ans += res * pow(2, count);
            count--;
        }
        return ans;  
    }
};