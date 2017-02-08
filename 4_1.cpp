class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        int cnt = 0;
        for(int i = 0; i < 32; i++)
        {
        	if((n & 1) == 1)	cnt++;
        	n >>= 1;
        }
        return  cnt == 1;
    }
};