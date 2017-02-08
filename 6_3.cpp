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
	* @return: head node
	*/
	ListNode *deleteDuplicates(ListNode *head) {
		// write your code here
		ListNode* tmp = head->next;
		ListNode* prev = head;
		while(tmp){
			if(prev->val == tmp->val){
				prev->next = tmp->next;
				tmp = tmp->next;
			}
			else{
				prev = tmp;
				tmp = tmp->next;
			}
		}
		return head;
	}
};