class Solution {
public:    
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
	int threeSumClosest(vector<int> nums, int target) {
		// write your code here
		if(nums.size() < 3)	return INT_MAX;
		sort(nums.begin(), nums.end());
		int mn = INT_MAX;
		for(int i = 0; i < nums.size()-2; i++)
		{
			int sum = target - nums[i];
			int l = i + 1, r = nums.size() - 1; 
			while(l < r)
			{
				int tmp = sum - (nums[l] + nums[r]);
				if(tmp == 0)	return target;
				else if(tmp > 0)
				{
					while(l < r and nums[l+1] == nums[l])	l++;
					l++;
				}
				else
				{
					while(l < r and nums[r-1] == nums[r])	r--;
					r--;
				}
				mn = abs(tmp) < abs(mn)? tmp: mn;
			}
			while(i < nums.size()-2 and nums[i+1] == nums[i])
				i++;
		}
		return mn+ target;
	}
};
