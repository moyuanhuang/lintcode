class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
	vector<long long> productExcludeItself(vector<int> &nums) {
		// write your code here
		vector<long long> ans;
		if(nums.empty())	return ans;
		int len = nums.size();
		vector<long long> left(len+1, 1);
		vector<long long> right(len+1, 1);
		for(int i = 1 ; i <= len; i++)
		{
			left[i] = left[i-1] * nums[i];
			right[i] = right[i-1] * nums[len-i];
		}
		for(int i = 1; i<= len; i++)
			ans.push_back(left[i-1] * right[len - i]);
		return ans;
	}
};