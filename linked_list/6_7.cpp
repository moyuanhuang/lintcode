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
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
	/**
	* @param head: The first node of linked list.
	* @return: a tree node
	*/
	TreeNode *sortedListToBST(ListNode *head) {
		// write your code here
		return helper(head);
	}

	TreeNode *helper(ListNode *head){
		if(!head)	return NULL;
		if(!head->next)	return new TreeNode(head->val);
		ListNode *prev = NULL;
		ListNode* fast = head->next, *slow = head;
		while(fast->next){
			prev = slow;
			slow = slow->next;
			fast = fast->next;
			if(fast->next)
				fast = fast->next;
		}
		TreeNode *root = new TreeNode(slow->val);
		if(prev){
		    prev->next = NULL;
			root->left = helper(head);
		}
		ListNode *right = slow->next;
		slow->next = NULL;
		root->right = helper(right);
		return root;
	}
};