#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>&arr){
    int low ,mid =0;
    // int mid = 0;
    int high = arr.size() - 1;
    while(mid <= high){
    switch(arr[mid]){
     case 0:
        swap( arr[mid++],arr[low++]);
        break;
     case 1:
        mid++;
        break;
     case 2:
        swap(arr[mid],arr[high--]);
        break;

}
}
}

int main() {
    vector<int> arr = {2, 0, 1, 1,0,1,0,1,0,1,0,1,0,1, 0, 2, 1, 0, 2};
    
    sort012(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

