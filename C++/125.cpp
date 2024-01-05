// 125. Valid Palindrome
// https://leetcode.com/problems/valid-palindrome/
// Authored by CarryKim

class Solution {
public:
    bool isPalindrome(string s) {
        string tmp = "";
        for(auto c : s) {
            if(isalnum(c))
                tmp += tolower(c);
        }
        int start = 0;
        int end = tmp.size() - 1;
        while(start <= end) {
            if(tmp[start] != tmp [end])
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }
};
