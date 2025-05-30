#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex = 0;

        // First pass: move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastNonZeroIndex] = nums[i];
                lastNonZeroIndex++;
            }
        }

        // Second pass: fill the rest with zeros
        for (int i = lastNonZeroIndex; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
