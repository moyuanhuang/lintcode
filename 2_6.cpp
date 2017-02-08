class Solution {
public:
    /**    
     * @param A: a vector of integers
     * @return: an integer
     */
	int firstMissingPositive(vector<int> A) {
		// write your code here
		if(A.empty())	return 1;
		sort(A.begin(), A.end());
		int mark = 1;
		for(int i = 0; i< A.size(); i++)
		{
			if(A[i] <= 0 or A[i] == mark - 1)	continue;
			if(A[i] == mark)	return mark;
			mark++;
		}
		return mark;
	}
};