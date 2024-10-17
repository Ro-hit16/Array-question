#include <iostream>
#include <vector>
using namespace std;

int maxProductSubarray(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int max_product = nums[0]; 
    int min_product = nums[0]; 
    int max_so_far = nums[0];  

    for (int i = 1; i < n; ++i) {
        int temp_max = max_product;
        
        max_product = max({nums[i], nums[i] * max_product, nums[i] * min_product});
        min_product = min({nums[i], nums[i] * temp_max, nums[i] * min_product});

         
        max_so_far = max(max_so_far, max_product);
    }

    return max_so_far;
}

int main() {
    vector<int> nums = {2,3,-2,4};
    cout << "Maximum product subarray: " << maxProductSubarray(nums) << endl;
    return 0;
}
