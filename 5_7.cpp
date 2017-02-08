class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An array of integers that's next permuation
     */
	vector<int> nextPermutation(vector<int> &nums) {
		// write your code here
		if(nums.size() <= 1)	return nums;
		int i = nums.size()-2;
		while(i >= 0 and nums[i+1] <= nums[i])	i--;
		if(i < 0){
			reverse(nums.begin(), nums.end());
			return nums;
		}
		int j = i + 1;
		while(j < nums.size() and nums[j] > nums[i])	j++;
		j--;
// 		cout << i << j << endl;
		swap(nums[i], nums[j]);
		reverse(nums.begin()+i+1, nums.end());
		return nums;
	}
};