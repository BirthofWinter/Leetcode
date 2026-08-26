#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size - 2; i++)
        {
            if (i>0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1, k = size - 1; j < k; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                while (j < k - 1 && nums[i] + nums[j] + nums[k - 1] >= 0)
                {
                    k--;
                }
                if (nums[i] + nums[j] + nums[k] == 0 && j < k)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                }
            }
        }
        return ans;
    }
};