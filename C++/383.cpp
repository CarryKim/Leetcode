// 383. Ransom Note
// https://leetcode.com/problems/ransom-note/
// Authored by CarryKim

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alphabet[26] = {0,};
        for(auto i : magazine)
            alphabet[i-'a']++;
        for(auto i : ransomNote) {
            if(alphabet[i-'a'] == 0)
                return false;
            alphabet[i-'a']--;
        }
        return true;
    }
};
