#incldue<iostream>

class Solution
{
public:
	vector<int> twoSum(vector<int> &nums,int target)
	{
		int n = nums.size();
		for(int i = 0;i < n;++i)
		{
			for(int j = i;j < n;j++)
			{
				if(nums[i] + nums[j] == target)
				{
					return {i,j};
				}
			}
		}
		return {};
	}
	
};