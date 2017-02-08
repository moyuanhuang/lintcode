class Solution {
public:    
    /**
     * @param numbers : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
	vector<vector<int> > threeSum(vector<int> &nums) {
		// write your code here
		vector<vector<int> > ans;
		if(nums.size() < 3)	return ans;
		vector<int> cur(3, 0);

		sort(nums.begin(), nums.end());
		KSum(nums, 3, 0, 0, nums.size()-1, ans, cur, 0);
		return ans;
	}
	
private:
	void KSum(vector<int> &nums, int k, int sum, int l, int r, vector<vector<int>> &ans, vector<int> &cur, int index)
	{
		int i, mx, mn;
		int km1 = k - 1;
		if(k > l - r + 1)	return;
		while(l < r)
		{
			mx = nums[r];
			mn = nums[l];

			if(k * mn > sum)	break;
			else if(k * mx < sum)	break;
			else if(mn + km1 * mx < sum)	l++;
			else if(km1 * mn + mx > sum)	r--;
			else if(k * mn == sum)
			{
				if(l + km1 < nums.size() and nums[l + km1] == mn)
				{
					for(int i = 0; i < k; i++)	cur[index + i] = mn;
					ans.push_back(cur);
				}
				break;
			}
			else if(k * mx == sum)
			{
				if(r - km1 >= 0 and nums[r - km1] == mx)
				{
					for(i = 0; i < k; i++)	cur[index + i] = mx;
					ans.push_back(cur);
				}
				break;
			}
			else if(k == 2)
			{
				cur[index] = mn;
				cur[index+1] = mx;
				ans.push_back(cur);
				while(l < r and nums[l+1] == nums[l])	l++;
				l++;
				while(r > l and nums[r-1] == nums[r])	r--;
				r--;
			}
			else
			{
				cur[index] = mn;
				KSum(nums, km1, sum-mn, ++l, r, ans, cur, index+1);
				while(l < r and nums[l] == nums[l-1])	l++;
			}
		}
	}
};
