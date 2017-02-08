class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
	int longestCommonSubstring(string &A, string &B) {
		// write your code here
		if(A.empty() or B.empty())	return 0;
		int lenA = A.length(), lenB = B.length();
		vector<vector<int>> dp(lenA+1, vector<int>(lenB+1, 0));
		int ans = 0;
		for(int i = 0; i < lenA; i++)
		{
			if(A[i] == B[0])
			{
				dp[i][0] = 1;
				ans = 1;
			}
			else
				dp[i][0] = 0;
		}
		for(int i = 0; i < lenA; i++)
			for(int j = 1; j < lenB; j++)
			{
				dp[i][j] = (A[i] == B[j])? (dp[i][j-1]+1): 0;
				ans = dp[i][j] > ans? dp[i][j]: ans;
			}
		return ans;
	}
};
