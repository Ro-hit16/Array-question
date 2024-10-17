#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> arr, int k) {
    int n = arr.size();
    int count = 0;
    int minimumswap = INT_MAX;

    // Count the total number of elements less than or equal to k
    for(int i = 0; i < n; i++) {
        if (arr[i] <= k)
            ++count;
    }
    
    int left = 0;
    int right = 0;
    int currentcount = 0;

    // Initialize the sliding window
    while(right < n) {
        // Expand the window to the right
        if (arr[right] <= k) {
            ++right;
            ++currentcount;
        }
        
        // Check if the window size is equal to the count
        if (right - left == count) {
            // Update the minimum number of swaps required
            minimumswap = min(minimumswap, count - currentcount);
        }

        // Shrink the window from the left
        if (arr[left] <= k)
            --currentcount;
        
        ++left;
    }

    return minimumswap;
}

int main() {
    vector<int> arr = {2, 1, 5, 6, 3};
    int k = 3;
    cout << "Minimum swaps required: " << minSwaps(arr, k) << endl; 
    return 0;
}
