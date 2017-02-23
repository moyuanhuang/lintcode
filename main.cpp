class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
	int findMin(vector<int> &nums) {
		if(nums.empty())	return -1;
		int low = 0, high = nums.size()-1;
		while(low < high){
			int mid = low + (high - low)/2;
			if(nums[mid] == nums[0])	return nums[0];
			else if(nums[mid] > nums[0])	low = mid + 1;
			else if(nums[mid] < nums[0])	high = mid - 1;
		}
		return nums[low];
	}
};