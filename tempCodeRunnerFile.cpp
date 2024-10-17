#include <algorithm>
#include <iostream>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr + n);
    
    int minheight = arr[0] + k;
    int maxheight = arr[n - 1] + k;
    int mindiff = maxheight - minheight;

    for(int i = 1; i < n; i++) {
        int tempmin = min(arr[0] + k, arr[i] - k);
        int tempmax = max(arr[i - 1] + k, arr[n - 1] - k);
       if (tempmin > maxheight - k || tempmax < minheight + k)
            continue;
        mindiff = min(mindiff, tempmax - tempmin);
    }

    return mindiff;
}

int main() {
    int arr[] = {2,1,6,5,4,9,3};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference: " << getMinDiff(arr, n, k) << endl;

    return 0;
}
