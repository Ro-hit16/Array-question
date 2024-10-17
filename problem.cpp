
///Smallest Subarray with sum greater than a given value


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int smallestSubarrayWithSum(vector<int>& arr, int target) {
    int n = arr.size();
    int minLength = INT_MAX;
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < n; ++end) {
        currentSum += arr[end];

        while (currentSum > target && start <= end) {
            minLength = min(minLength, end - start + 1);
            currentSum -= arr[start];
            ++start;
        }
    }

    return (minLength != INT_MAX) ? minLength : 0;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 0, 19};
    int target = 51;
    cout << "Smallest subarray length: " << smallestSubarrayWithSum(arr, target) << endl;  // Output: 3
    return 0;
}
