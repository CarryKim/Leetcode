// 137. Single Number II
// https://leetcode.com/problems/single-number-ii/
// Authored by CarryKim

// Same code 136-1.cpp

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        for(auto &ans : m){
            if(ans.second == 1)
                return ans.first;
        }
        return 0;
    }
};
