#include <cstdint>
#include<iostream>
#include <vector>
#include <algorithm>
#include <climits> // for INT_MAX
using namespace std;

int choklate(vector<int>& arr, int m) {
    int n = arr.size();//no.of choklet
    //m no.of mens
    if(m > n)
        return 0;
    if (n == 0 || m == 0)  
        return 0;

    sort(arr.begin(), arr.end());

    int mindiff = INT_MAX; // Using INT_MAX for maximum range
    for(int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        mindiff = min(diff, mindiff);
    }
    return mindiff;
}

int main() {
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3; 
    cout << "Minimum difference: " << choklate(arr, m) << endl;
    return 0;
}
