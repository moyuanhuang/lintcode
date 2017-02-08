class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
	vector<int> searchRange(vector<int> &A, int target) {
		// write your code here
		vector<int> ans;
		ans.push_back(-1);ans.push_back(-1);
		if(A.empty())	return ans;
		int low = 0, high = A.size()-1;
		// first
		while(low < high)
		{
		  //  cout << low << " " << high << endl;
			int mid = (low + high)/2;
			if(A[mid] >= target)	high = mid;
			else	low = mid + 1;
		}
		if(A[low] == target)	ans[0] = low;
		else	return ans;
		//second
		low = 0;high = A.size()-1;
		while(low < high - 1)
		{
		  //  cout << low << " " << high << endl;
			int mid = (low + high)/2;
			if(A[mid] <= target)	low = mid;
			else    high = mid - 1; //A[mid] > target
		}
		if(A[high] == target)	ans[1] = high;
		else	ans[1] = low;
		return ans;

	}
};