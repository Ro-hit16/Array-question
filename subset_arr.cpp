#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_subset(vector<int>& arr1, vector<int>& arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            return false;
        }
    }
    return j == arr2.size();
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> arr2 = {3, 5, 7};

    if (is_subset(arr1, arr2)) {
        cout << "arr2 is a subset of arr1" << endl;
    } else {
        cout << "arr2 is not a subset of arr1" << endl;
    }
    return 0;
}
