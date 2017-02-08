class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
	vector<int> twoSum(vector<int> &nums, int target) {
		// write your code here
		unordered_map<int, int> my_map;
		for(int i = 0; i < nums; i++)
		{
			int first = nums[i] - target;
			auto iter = my_map.find(first);
			if(iter != my_map.end())	return vector<int>{iter->second, i+1};
			else
				my_map[nums[i]] = i+1;
		}
		return {};
	}
};
