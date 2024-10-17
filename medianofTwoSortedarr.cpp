#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median(vector<int>& arr1, vector<int>& arr2) {
    int total_length = arr1.size() + arr2.size();
    int median_index = total_length / 2;
    bool is_even = total_length % 2 == 0;
    int i = 0;
    int j = 0;

   
    vector<int> merge;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merge.push_back(arr1[i]);
            i++;
        } else {
            merge.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size()) {
        merge.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        merge.push_back(arr2[j]);
        j++;
    }

    if (is_even) {
        return (double)(merge[median_index - 1] + merge[median_index]) / 2;
    } else {
        return merge[median_index];
    }
}

int main() {
    vector<int> arr1 =   {1, 3, 5, 7, 9};
 

    vector<int> arr2 = {2, 4, 6, 8};
      
    

    double median_value = median(arr1, arr2);
    cout << "Median: " << median_value << endl;
    return 0;
}
