// 135. Candy
// https://leetcode.com/problems/candy/
// Authored by CarryKim

class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans = 0;
        vector<int> V(ratings.size(),1);
        // Left to Right
        for(int i=1; i<ratings.size(); i++) {
            if(ratings[i] > ratings[i-1])
                V[i] = V[i-1] + 1;
        }
        // Right to Left
        for(int i=ratings.size()-1; i>0; i--) {
            if(ratings[i] < ratings[i-1])
                V[i-1] = max(V[i-1], V[i] + 1);
        }
        for(int i=0; i<V.size(); i++) ans += V[i];
        return ans;
    }
};
