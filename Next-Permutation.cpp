#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) 
        {
            i--;
        }
        if (i >= 0) 
        {
            int j = n - 1;
            while (nums[j] <= nums[i]) 
            {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main() 
{
    Solution s;

    vector<int> nums = {1, 2, 3};

    cout << "Before: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    s.nextPermutation(nums);

    cout << "After:  ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
