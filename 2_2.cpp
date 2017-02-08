class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
	vector<int> subarraySum(vector<int> nums){
		// write your code here
		for(int i = 0; i < nums.size(); i++)
		{
			if(nums[i] == 0)	return vector<int>(2,i);
			int sum = nums[i];
			for(int j = i+1; j < nums.size(); j++)
			{
				sum += nums[j];
				if(sum == 0)	return vector<int>{i,j};
			}
		}
		return vector<int>(1,-1);
	}
};