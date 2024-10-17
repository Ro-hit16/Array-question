#include <iostream>
#include<vector>
using namespace std;


vector<int> mergeSortedArrays(vector<int>&arr1 , vector<int>&arr2){
    int m = arr1.size() - 1;
    int n = arr2.size() - 1;
    int k = m + n -1;
    while(m >=0 && n>=0){
        if(arr1[m] > arr2[n]){
            arr1[k--] = arr1[m--];
        }
        else{
            arr1[k--] = arr2[n--];
        }
    }
    while(n>= 0){
        arr1[k--]=arr2[n--];                      
    }
    while(m>= 0){
        arr1[k--]=arr2[m--];                      
    }
}

int main() {
    // Test cases
    vector<int> arr1 = {1, 3, 5, 7, 9};
    int m = arr1.size();

    vector<int> arr2 = {2, 4, 6};
    int n = arr2.size();

    mergeSortedArrays(arr1, arr2); // Merge both arrays

    cout << "Merged array: ";
    for (int i = 0; i < m + n; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}