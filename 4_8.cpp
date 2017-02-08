class Solution {
public:
    /**
     *@param n: Given a decimal number that is passed in as a string
     *@return: A string
     */
	string binaryRepresentation(string n) {
		// wirte your code here
		stringstream ss(n);
		int a;
		float b;
		ss >> a >> b;
		string ans2 = decimalHelper(b);
		if(ans2 == "ERROR")	return ans2;
		string ans1 = intHelper(a);
		if(ans2 == "0")
			return ans1;
		return ans1 + "." + ans2;
	}

private:
	string intHelper(int a)
	{
		if(a == 0)	return "0";
		stringstream ss;
		while(a != 0)
		{
			ss << a%2;
			a /= 2;
		}
		string ret = ss.str();
		reverse(ret.begin(), ret.end());
		return ret;
	}

	string decimalHelper(int a)
	{
		if(a == 0)	return "0";
		stringstream ss;
		while(a%1 != 0)
		{
			if(ss.gcount() > 32)	return "ERROR";
			ss << int(a*2);
			a *= 2;
		}
		string ret = ss.str();
		reverse(ret.begin(), ret.end());
		return ret;
 	}
};
