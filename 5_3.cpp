class Solution {
public:
    /**
     * @param gas: a vector of integers
     * @param cost: a vector of integers
     * @return: an integer 
     */
	int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
		// write your code here
		int ans = 0;
		int total_gas = 0;
		int total_cost = 0;
		int cur = 0;
		for(int i = 0; i < gas.size(); i++)
		{
			cur += gas[i] - cost[i];
			total_cost += cost[i];
			total_gas += gas[i];
			if(cur < 0)
			{
			    ans = i + 1;
			    cur = 0;
			}
		}
		if(total_gas >= total_cost)
			return ans;
		else
			return -1;

	}
};