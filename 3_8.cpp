/**
 * class SVNRepo {
 *     public:
 *     static bool isBadVersion(int k);
 * }
 * you can use SVNRepo::isBadVersion(k) to judge whether 
 * the kth code version is bad or not.
*/
class Solution {
public:
    /**
     * @param n: An integers.
     * @return: An integer which is the first bad version.
     */
	int findFirstBadVersion(int n) {
		// write your code here
		int low = 1, high = n;
		while(low < high)
		{
			int mid = (low + high)/2;
			if(!SVNRepo::isBadVersion(mid))
				low = mid + 1;
			else
				high = mid;
		}
		return SVNRepo::isBadVersion(low)? low: low+1;
	}
};
