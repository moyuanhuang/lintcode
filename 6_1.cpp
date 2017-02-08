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
	* @param n: An integer.
	* @return: The head of linked list.
	*/
	ListNode *removeNthFromEnd(ListNode *head, int n) {
		// write your code here
		ListNode *p1 = head, *p2 = head;
		for(int i = 0; i < n-1 and p1->next; i++){
			p1 = p1->next;
		}
		ListNode* prev = NULL;
		while(p1->next){
			p1 = p1->next;
			prev = p2;
			p2 = p2->next;
		}
		if(prev)
		    prev->next = p2->next;
		else
		    return head->next;
		return head;
	}
};


