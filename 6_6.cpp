/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	/**
	* @param head: the list
	* @param k: rotate to the right k places
	* @return: the list after rotation
	*/
	ListNode *rotateRight(ListNode *head, int k) {
		// write your code here
		if(!head or !head->next)   return head;
		int len = 1;
		ListNode* tmp = head;
		for(; tmp->next; tmp = tmp->next)
			++len;
		int shift = 0; 
		if(k%len == 0)  return head;
		else
		    shift = len - k % len;
		ListNode *tail = head;
		for(int i = 1; i < shift; i++)
			tail = tail->next;
// 		cout << len << endl;
// 		cout << shift << endl;
// 		cout << tail->val << endl;
		ListNode *new_head = tail->next;
		tail->next = NULL;
		tmp->next = head;
		return new_head;
	}
};