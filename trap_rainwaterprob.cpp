#include <iostream>
#include <vector>
using namespace std;

int trapwater(vector<int>& arr) {
    int n = arr.size();
    if (n == 0)
        return 0;
     
    // Create two arrays to store the maximum heights encountered so far from left and right directions
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    
    // Fill the left array
    left[0] = arr[0];
    for(int i = 1; i < n; i++) {
        left[i] = max(arr[i], left[i - 1]);
    }
    
    // Fill the right array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], arr[i]);
    }
    
    // Calculate trapped water
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += min(left[i], right[i]) - arr[i];
    }

    return ans;
}

int main() {
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapping water is: " << trapwater(arr) << endl;
    return 0;
}
