class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
	string longestCommonPrefix(vector<string> &strs) {
		// write your code here
		if(strs.empty())	return "";
		int len = strs[0].length();
		int n = strs.size();
		string ans = "";
		for(int i = 0; i < len; i++)
		{
			char c = strs[0][i];
			for(int j = 1; j < n; j++)
				if(i >= strs[j].length() or strs[j][i] != c)	return ans;
			ans += c;
		}
		return ans;
	}
};