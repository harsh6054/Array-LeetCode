#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) 
        {
            while (strs[i].find(prefix) != 0) 
            {
                prefix.pop_back();
                if (prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};

int main() 
{
    Solution sol;
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Output 1: " << sol.longestCommonPrefix(strs1) << endl;
    cout << "Output 2: " << sol.longestCommonPrefix(strs2) << endl;
    return 0;
}
