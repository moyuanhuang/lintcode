class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
	int binarySearch(vector<int> &array, int target) {
		// write your code here
		int low = 0, high = array.size() -1;
		while(low < high)
		{
			int mid = (low + high)/2;
			if(target > array[mid])
				low = mid + 1;
			else
				high = mid;
		}
		if(array[left] == target)	return left;
		return -1;
	}
};