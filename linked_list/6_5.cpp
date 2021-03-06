/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
	/**
	* @param head: The first node of linked list.
	* @return: The new head of reversed linked list.
	*/
	ListNode *reverse(ListNode *head) {
		// write your code here
		ListNode *prev = NULL;
		ListNode *cur = head;
		while(cur){
			ListNode *tmp = cur->next;
			cur->next = prev;
			prev = cur;
			cur = tmp;
		}
		return prev;
	}
};
