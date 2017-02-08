class Solution {
public:
    /**
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
	string DeleteDigits(string A, int k) {
		// wirte your code here
		if(A.length() <= k)	return 0;
		for(int i = 0; i < A.length()-1; ++i)
		{
			if(k == 0)	break;
			if(A[i+1] < A[i])
			{
				A.erase(A.begin()+i);
				// cout << A << endl;
				--k;
				i -= 2;
				i = i < -1? -1: i;
			}   
		}
		if(k != 0)
		    A = A.substr(0, A.length()-k);
// 		cout << "This is A: "<< A << endl;
// 		cout << "This is A[0]: " << A[0] << endl;
		while(A[0] == '0' and A.length() > 1)
		{
		  //  cout << "erasing" << endl;
		    A.erase(A.begin());
		}
		return A;
	}
};
