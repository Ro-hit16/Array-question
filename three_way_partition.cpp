#include <iostream>
#include <vector>
using namespace std;

void threeWayPartition(vector<int>& arr, int target) {
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while (mid < high ) {
        if(arr[mid] < target){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
            }
        else if(arr[mid] == target){
            mid++;
        }
        else{
            swap(arr[mid] , arr[high]);
            high--;
        }
    
    }
    // return arr;
}

int main() {
    vector<int> nums = {1, 2, 3, 3, 2, 1, 5, 6, 4, 3};
    int target = 3;
    threeWayPartition(nums, target);

    cout << "Partitioned Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
