#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArraySum(const vector<int>& nums){
    int maxEndingHere = 0;
    int maxSoFar = INT_MIN;

    for (int num : nums) {
        maxEndingHere = max(num, maxEndingHere + num);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSum = maxSubArraySum(nums);

    cout << "Largest sum contiguous subarray: " << maxSum << endl;

    return 0;
}
