// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/
// Authored by CarryKim

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp;
        for(int i=1; i<=numRows; i++)
            dp.push_back(vector<int>(i, 1));
        for(int i=2; i<numRows; i++)
            for(int j=1; j<dp[i].size()-1; j++)
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        return dp;
    }
};
