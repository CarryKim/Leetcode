// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/
// Authored by CarryKim

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s{nums1.begin(), nums1.end()};
        for(auto x : nums2) {
            if(s.erase(x))
                ans.push_back(x);
        }
        return ans;
    }
};
