class Solution {
public:
    /**
     *@param num: A list of non negative integers
     *@return: A string
     */
	bool cmp(const string &a, const string &b)
    {
    	if(a.length() == b.length())	return a > b;
    	int len = min(a.length(), b.length());
        for(int i = 0; i < len; i++)
        {
            if(a[i] == b[i]) continue;
            return a[i] > b[i];
        }
        if(len == a.length())   return a[0] > b[len];
        else    return a[len] >= b[0];
    }

	string largestNumber(vector<int> &num) {
		// write your code here
		vector<string> v;
		stringstream ss;
		for(int n : num)
		{
			ss.clear();
			ss << n;
			v.push_back(ss.str());
		}
		sort(v.begin(), v.end(), cmp);
		string ans;
		for(string vv : v)
			ans += vv;
		return ans;

	}

};