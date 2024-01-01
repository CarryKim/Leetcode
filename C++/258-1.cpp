// 258. Add Digits
// https://leetcode.com/problems/add-digits/
// Authored by CarryKim

class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        while(num) {
            ans += num%10;
            num /= 10;
        }
        if(ans >= 10)
            return addDigits(ans);
        else
            return ans;
    }
};
