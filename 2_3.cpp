class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
	int removeDuplicates(vector<int> &nums) {
		// write your code here
		if(nums.empty())	return 0;
		int cnt = 0;
		for(int i = 1; i < nums.size(); i++)
		{
			if(nums[i] != nums[cnt])
			    nums[++cnt] = nums[i];
		}
		return cnt+1;
	}
};