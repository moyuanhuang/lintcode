class Solution {
public:
	int partitionArray(vector<int> &nums, int k) {
		// write your code here
		int l = 0, r = nums.size() -1;
		while(l <= r)
		{
			while(l <= r and nums[l] < k) l++;
			while(l <= r and nums[r] >= k)	r--;
			if(l <= r)
				swap(nums[l], nums[r]);
		}
        return l;
	}
private:
	void swap(int &a, int &b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
};