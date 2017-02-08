class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
	int findPeak(vector<int> A) {
		// write your code here
		if(A.empty())	return -1;
		int low = 0, high = A.size()-1;
		while(low <= high)
		{
			int mid = (low+high)/2;
			if(mid > 0 and mid < A.size()-1 and A[mid-1] < A[mid] and A[mid] > A[mid+1])
				return mid;
			else if(mid > 0 and A[mid-1] > A[mid])	high = mid -1;
			else if(mid < A.size()-1 and A[mid] < A[mid+1])	low = mid + 1;
		}
		return -1;
	}
};