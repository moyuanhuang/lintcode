class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
	void mergeSortedArray(int A[], int m, int B[], int n) {
		// write your code here
		int k = m + n - 1;
		m--; n--;
		for(;k >= 0; k--)
			A[k] = A[m] >= B[n]? A[m--]: B[n--];
		return;
	}
};