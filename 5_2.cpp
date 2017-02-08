class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
	int majorityNumber(vector<int> nums) {
		// write your code here
		if(nums.empty())	return 0;
		int count = 1;
		int cur = nums[0];
		for(int i = 1; i < nums.size(); i++)
		{
			if(count == 0)
			{
				cur = nums[i];
				count = 1;
			}
			else
			{
				if(cur == nums[i])	count++;
				else	--count;
			}
		}
		return cur;
	}
};
