class Solution {
public:
    /*
     * @param a, b, n: 32bit integers
     * @return: An integer
     */
	int fastPower(int a, int b, int n) {
		// write your code here
		if(n == 0)	return 1 % b;
		else if(n == 1)	return a % b
		else if(n < 0)	return -1;
		int ans = fastPower(a, b, n/2);
		ans = (ans * ans) % b;
		if(n % 2 == 1)
			ans = ( ans * (a%b)) % b;
		return ans;
	}
};