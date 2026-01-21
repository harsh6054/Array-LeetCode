#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
   

int main() 
{
    Solution sol;
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Output 1: " << sol.longestCommonPrefix(strs1) << endl;
    cout << "Output 2: " << sol.longestCommonPrefix(strs2) << endl;
    return 0;
}

