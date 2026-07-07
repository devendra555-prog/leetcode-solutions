/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */

class Solution {
  int getDecimalValue(ListNode? head) {
    int ans = 0;
    ListNode? temp = head;

    while (temp != null) {
      ans = ans * 2 + temp.val;
      temp = temp.next;
    }

    return ans;
  }
}