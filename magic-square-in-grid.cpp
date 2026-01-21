#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    

        int maxSize = min(m, n);

        for (int k = maxSize; k >= 2; k--) 
        {
            for (int r = 0; r + k <= m; r++) 
            {
                for (int c = 0; c + k <= n; c++) 
                {

                    int target = row[r][c + k] - row[r][c];
                    bool ok = true;

                    for (int i = r; i < r + k && ok; i++) 
                    {
                        if (row[i][c + k] - row[i][c] != target)
                            ok = false;
                    }

                    for (int j = c; j < c + k && ok; j++) 
                    {
                        if (col[r + k][j] - col[r][j] != target)
                            ok = false;
                    }

                    int diag1 = 0, diag2 = 0;
                    for (int i = 0; i < k; i++) 
                    {
                        diag1 += grid[r + i][c + i];
                        diag2 += grid[r + i][c + k - 1 - i];
                    }

                    if (ok && diag1 == target && diag2 == target)
                        return k;
                }
            }
        }
        return 1;
    }
};

int main() 
{
    Solution sol;

    vector<vector<int>> grid = 
    {
        {7, 1, 4, 5, 6},
        {2, 5, 1, 6, 4},
        {1, 5, 4, 3, 2},
        {1, 2, 7, 3, 4}
    };

    cout << sol.largestMagicSquare(grid) << endl;
    return 0;
}

