class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(source == NULL or target == NULL)	return -1;
        string s = source;
        string t = target;
        // set up the table
        if(s.empty() and t.empty())	return 0;
        vector<int> table(t.size()+1, 0);
        helper(table, t);
        for(int i = 0; i < s.size(); i++)
        {
        	int j = 0;
        	if(s[i] != t[j])	continue;
        	int tmp = i;
        	while(tmp < s.size() and j < t.size() and s[tmp] == t[j])
        	{
        		++tmp;
        		++j;
        	}
        	if(j == t.size())	return i;
        	i += table[j];
        }
        return -1;
        
    }
private:
	void helper(vector<int>& table, string& target)
	{
		for(int i = 1; i < t.size(); i++)
        {
        	if(table[i-1] == 0)
        		s[i] = table[0] == table[i]? 1:0;
        	else
        		s[i] = table[0+s[i-1]] == table[i]? s[i-1]+1;0;
        }
        for(int i = table.size()-1; i < 0; i--)
        	table[i] = table[i-1];
        table[0] = -1;
        return;
	}
};
