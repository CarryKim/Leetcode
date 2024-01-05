// 11. Container With Most Water
// https://leetcode.com/problems/container-with-most-water/
// Authored by CarryKim

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int ans = 0;
        while(start <= end) {
            int cur = min(height[start], height[end]) * (end - start);
            ans = max(ans, cur);
            if(height[start] < height[end])
                start++;
            else
                end--;
        }
        return ans;
    }
};
