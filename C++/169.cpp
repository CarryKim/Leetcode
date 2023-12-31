// 169. Majority Element
// https://leetcode.com/problems/majority-element/
// Authored by CarryKim

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int mx = 0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
            mx = max(m[nums[i]], mx);
        }
        for(auto &ans : m){
            if(ans.second == mx)
                return ans.first;
        }
        return 0;
    }
};
