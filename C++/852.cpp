// 852. Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Authored by CarryKim

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        while(start <= end) {
            int mid = (start + end)/2;
            if(arr[mid] < arr[mid+1])
                start = mid+1;
            else
                end = mid-1;
        }
        return start;
    }
};
