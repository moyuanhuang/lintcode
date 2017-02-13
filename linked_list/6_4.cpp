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
	* @param head: The first node of linked list.
	* @param x: an integer
	* @return: a ListNode 
	*/
	ListNode *partition(ListNode *head, int x) {
		// write your code here
		ListNode *small = new ListNode(0);
		ListNode *large = new ListNode(0);
		ListNode *t_small = small, *t_large = large;
		while(head){
			if(head->val < x){
				t_small->next = head;
				t_small = t_small->next;
			}
			else{
				t_large->next = head;
				t_large = t_large->next;
			}
			head = head->next;
		}
		t_small->next = large->next;
		t_large->next = NULL;
		return small->next;

	}
};