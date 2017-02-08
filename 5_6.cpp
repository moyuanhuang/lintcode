class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
	bool canJump(vector<int> A) {
// 		// write you code here
// 		int pos = 0;
// 		while(pos < A.size() and A[pos] != 0)
// 		{
// 			int next = 0;
// 			int leap = INT_MIN;
// 			for(int i = 1; i <= A[pos]; i++)
// 			{
// 				int tmp = pos + i + A[pos+i];
// 				if(leap < tmp)
// 				{
// 				    leap = tmp;
// 				    next = pos + i;
// 				}
// 			}
// 			pos = next;
// // 			cout << pos << " " << A[pos] << endl;
// 		}
// 		return pos >= A.size()-1;
		int max_jump = A[0];
		for(int i = 1; i < A.size()-1; ++i)
		{
			if(max_jump == 0)	return false;
			max_jump = max(max_jump-1, A[i]);
		}
		return true;

	}
};
