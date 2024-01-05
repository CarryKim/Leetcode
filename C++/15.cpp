// 15. 3Sum
// https://leetcode.com/problems/3sum/
// Authored by CarryKim

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> tmp;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            int j = i+1;
            int k = nums.size() - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)
                    j++;
                else if(sum > 0)
                    k--;
                else {
                    tmp.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
        for(auto c : tmp) {
            ans.push_back(c);
        }
        return ans;
    }
};
