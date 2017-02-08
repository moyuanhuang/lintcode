class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
	int sqrt(int x) {
		// write your code here
		int low = 1, high = x;
		while(low <= high)
		{
			int tmp = low + (low + high)/2;
			long long sq = tmp * tmp;
			if(sq == x)	return tmp;
			long long sq1 = (tmp-1) * (tmp-1);
			if(sq1 < x and sq > x)
				return tmp-1;
			long long sq2 = (tmp+1) * (tmp+1);
			if(sq < x and sq2 > x)
				return tmp;
			if(sq > x)	high = tmp;
			else	low = tmp;
		}
		return -1;
	}
};