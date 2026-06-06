#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int> &arr, int n) {
        int largest = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }

        return largest;
    }
};

int main() {
    vector<int> arr = {3, 7, 2, 9, 5};

    Solution obj;

    cout << obj.largestElement(arr, arr.size()) << endl;

    return 0;
}