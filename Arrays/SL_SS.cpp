#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> getSecondOrderElements(vector<int>& nums) {
        if (nums.size() < 2) return {-1, -1}; // Edge case

        int largest = INT_MIN, secondLargest = INT_MIN;
        int smallest = INT_MAX, secondSmallest = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            // Find Second Largest
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
            } else if (nums[i] > secondLargest && nums[i] != largest) {
                secondLargest = nums[i];
            }

            // Find Second Smallest
            if (nums[i] < smallest) {
                secondSmallest = smallest;
                smallest = nums[i];
            } else if (nums[i] < secondSmallest && nums[i] != smallest) {
                secondSmallest = nums[i];
            }
        }

        return {secondLargest, secondSmallest};
    }
};

int main() {
    Solution solver;
    vector<int> nums = {12, 35, 1, 10, 34, 1};

    vector<int> result = solver.getSecondOrderElements(nums);

    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}