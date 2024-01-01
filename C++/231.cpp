// 231. Power Of Two
// https://leetcode.com/problems/power-of-two/
// Authored by CarryKim

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        while(n%2 == 0) n /= 2;
        return n == 1; 
    }
};
