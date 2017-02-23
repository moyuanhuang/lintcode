class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
	int search(vector<int> &A, int target) {
		// write your code here
		if(A.empty())	return -1;
		int low = 0, high = A.size()-1;
		while(low <= high)
		{
			int mid = (low + high)/2;
			if(A[mid] == target)	return mid;
			else if(A[low] < A[mid])
			{
				if(target >= A[low])	high = mid - 1;
				else	low = mid + 1;
			}
			else
			{
				if(target > A[mid] and target <= A[high])	low = mid + 1;
				else	high = mid - 1;
			}
		}
		return -1;
	}
};