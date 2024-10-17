#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minOperationsToPalindrome(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    int operations = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            operations += abs(arr[left] - arr[right]);
        }
        left++;
        right--;
    }

    return operations;
}

int main() {
    vector<int> arr = {1, 2, 1};
    cout << "Minimum operations required: " << minOperationsToPalindrome(arr) << endl;
    return 0;
}
