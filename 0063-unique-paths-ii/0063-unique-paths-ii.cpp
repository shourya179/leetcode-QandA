class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int m = og.size();
        int n = og[0].size();

        if (og[0][0] == 1)
            return 0;

        vector<int> prev(n, 0), curr(n, 0);

        // Initialize first row
        prev[0] = 1;
        for (int j = 1; j < n; j++) {
            if (og[0][j] == 0)
                prev[j] = prev[j - 1];
            else
                prev[j] = 0;
        }

        for (int i = 1; i < m; i++) {
            curr[0] = (og[i][0] == 0) ? prev[0] : 0;

            for (int j = 1; j < n; j++) {
                if (og[i][j] == 0)
                    curr[j] = curr[j - 1] + prev[j];
                else
                    curr[j] = 0;
            }

            prev = curr;
        }

        return prev[n - 1];
    }
};