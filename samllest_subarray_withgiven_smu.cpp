#include<iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;
int smallest_subarr(vector<int>arr ,int target){
    int start=0,end = 0;
    int currentsum=0;
    int minlength = INT_MAX;
    int n = arr.size();

    while(end<n){
        currentsum += arr[end];

        while(currentsum > target){
            minlength = min(minlength , end-start + 1);
            currentsum -= arr[start];
            start++;
        }
        end++;

    }
      return (minlength != INT_MAX) ? minlength : 0;;
    
}
int main(){
vector<int> arr = {1, 4, 45, 6, 0, 19};
    int target = 51;
    cout << "Smallest subarray length: " << smallest_subarr(arr, target) << endl; // Output: 3
return 0;
}