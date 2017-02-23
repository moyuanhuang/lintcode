class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
	bool searchMatrix(vector<vector<int> > &matrix, int target) {
		// write your code here
		if(matrix.empty())	return false;
		int low = 0, high = matrix.size()-1;
		while(low < high)
		{
			int mid = (low+ high)/2;
			if(target == matrix[mid][0])	return true;
			else if(target < matrix[mid][0])
				high = mid - 1;
			else
				low = mid + 1;
		}
		int row = matrix[low][0] > target? low - 1: low;
// 		if(target == 80)    cout << row;
		low = 0;
		high = matrix[row].size()-1;
		while(low <= high)
		{
			int mid = (low + high)/2;
			if(target == matrix[row][mid])	return true;
			else if(target < matrix[row][mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		return false;
	}
};
