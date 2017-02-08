class Solution {
public:
    /** 
     *@param L: Given n pieces of wood with length L[i]
     *@param k: An integer
     *return: The maximum length of the small pieces.
     */
	int woodCut(vector<int> L, int k) {
		// write your code here
		if(L.empty())   return 0;
		sort(L.begin(), L.end());
		long long low = 1, high = L[L.size()-1];
		long long sum = 0;
		while(low < high - 1)
		{
			long long mid = (low + high)/2;
			sum = helper(L, mid);
			if(sum >= k)	low = mid;
			else	high = mid;
		}
		sum = helper(L, high);
		if(sum >= k)	return high;
// 		cout << high << " "<< sum << endl;
		sum = helper(L, low);
		if(sum >= k)	return low;
// 		cout << low << " " << sum << endl;
		return 0;
	}
private:
	long long helper(vector<int>& L, int len)
	{
		long long sum = 0;
		for(int i = 0; i < L.size(); i++)
			sum += L[i]/len;
		return sum;
	}
};