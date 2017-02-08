class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
	vector<string> anagrams(vector<string> &strs)
	{
		// write your code here
		vector<string> ans;
		unordered_map<string, vector<string>> maps;
		for(string str: strs)
		{
			string key = helper(str);
			if(maps.count(key) != 0)
				maps[key].push_back(str);
			else
			{
				vector<string> value;
				value.push_back(str);
				maps[key] = value;
			}
		}
		for(auto p : maps)
		{
			if(p.second.size() > 1)
				for(string str: p.second)
					ans.push_back(str);
		}
		return ans;
	}
private:
	string helper(string& str)
	{
		sort(str.begin(), str.end());
		stringstream ss;
		int count = 1;
		for(int i = 1; i< str.size(); i++)
		{
			
		}
	}
};
