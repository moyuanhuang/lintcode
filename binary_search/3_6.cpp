class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
	int findMin(vector<int> &nums) {
		// write your code here
		if(nums.empty()) return -1;
		int low = 0, high = nums.size() -1;
		while(low < high)
		{
		    if(nums[low] < nums[high])  break;
			int mid = (low + high)/2;
// 			if(nums[mid] < nums[high])	high = mid;
            if(nums[mid] > nums[high])  low = mid + 1;
			else if(nums[mid] < nums[low])  high = mid;
			else high = mid;
// 			else	low = mid + 1;
		}
		return nums[low];
	}
};