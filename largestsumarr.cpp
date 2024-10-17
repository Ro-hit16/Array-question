#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int max_current = nums[0];
    int max_global = nums[0];
    
    for (int i = 1; i < nums.size(); ++i) {
        max_current = max(nums[i], max_current + nums[i]);
        max_global = max(max_global, max_current);
    }
    
    return max_global;
}

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "Largest sum contiguous subarray: " << maxSubArraySum(arr) << endl;
    return 0;
}
