#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0; // Pointer to track the last placement of a unique element
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1; // Total number of unique elements
    }
};

int main() {
    Solution solver;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int uniqueCount = solver.removeDuplicates(nums);

    cout << "Number of unique elements: " << uniqueCount << endl;
    cout << "Modified array: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}