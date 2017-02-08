/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
	/**
	* @param ListNode l1 is the head of the linked list
	* @param ListNode l2 is the head of the linked list
	* @return: ListNode head of linked list
	*/
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
		// write your code here
		ListNode *t1 = l1, *t2 = l2;
		ListNode *head = new ListNode(0);
		ListNode *ret = head;
		while(l1 and l2){
			if(l1->val < l2->val){
				head->next = l1;
				l1 = l1->next;
			}
			else{
				head->next = l2;
				l2 = l2->next;
			}
		}
		if(l1)	head->next = l1;
		if(l2)	head->next = l2;
		return ret;
	}
};