class Solution {
    /** 
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
	int searchInsert(vector<int> &A, int target) {
		// write your code here
		int low = 0, high = A.size();
		while(low < high)
		{
			int mid_index = low + (high - low)/2;
			int mid = A[mid_index];
			if(mid < target)	high = mid_index - 1;
			if(mid > target)	low = mid_index + 1;
		}
		return high - 1;
	}
};