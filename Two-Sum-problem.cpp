#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) 
        {
            int need = target - nums[i];
            if (mp.find(need) != mp.end()) 
            {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {}; 
    }
};

int main() 
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = sol.twoSum(nums, target);
    cout << "Indices: ";
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
