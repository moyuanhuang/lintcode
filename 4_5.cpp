class Solution {
public:
    /**
     *@param n, m: Two integer
     *@param i, j: Two bit positions
     *return: An integer
     */
	int updateBits(int n, int m, int i, int j) {
		// write your code here
		int mask = 0;
		for(int b = 31; b >= 0; --b)
		{
			mask <<= 1;
			if(b < i or b > j)
				mask |= 1;
		}
		m <<= i;
		return (n & mask) | m;
	}
};