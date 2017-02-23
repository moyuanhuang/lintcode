class Solution {
public:
    /**
     * @param num: the rotated sorted array
     * @return: the minimum number in the array
     */
	int helper(const vector<int> &num, int low, int high){
		if(low > high)	return INT_MAX;
		int mid = low + (high - low)/2;
		if(num[low] < num[high] or low == high)	return num[low];
		if(num[mid] > num[high])
			return helper(num, mid + 1, high);
		else if(num[mid] < num[low])
			return helper(num, low, mid);
		else
			return min(helper(num, low, mid - 1), min(num[mid], helper(num, mid + 1, high)));
	}
    int findMin(vector<int> &num) {
        // write your code here
        if(num.empty())	return -1;
        return helper(num, 0, num.size()-1);
    }
};