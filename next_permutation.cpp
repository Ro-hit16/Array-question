#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void next_permutation(vector<int>& arr) {
    int n = arr.size();
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        while (j > i && arr[j] <= arr[i]) {
            j--; // Move j to the right until arr[j] > arr[i]
        }
        swap(arr[i], arr[j]);
    }
    reverse(arr.begin() + i + 1, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 4};
    next_permutation(arr);
    cout << "Next permutation: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
