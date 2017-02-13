/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
	/**
	 * @param head: The head of linked list with a random pointer.
	 * @return: A new head of a deep copy of the list.
	 */
	RandomListNode *copyRandomList(RandomListNode *head) {
		// write your code here
		RandomListNode *dummy = new RandomListNode(-1);
		RandomListNode *new_tmp = dummy;
		RandomListNode *tmp = head;
		unordered_map<RandomListNode*, RandomListNode*> umap;
		while(tmp){
			new_tmp->next = new RandomListNode(tmp->label);
			new_tmp = new_tmp->next;
			umap[tmp] = new_tmp;
			tmp = tmp->next;
		}
		tmp = head;
		while(tmp){
			if(tmp->random)	umap[tmp]->random = umap[tmp->random];
			tmp = tmp->next;
		}
		return dummy->next;
	}
};