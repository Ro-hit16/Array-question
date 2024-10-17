#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longest_consecutive(vector<int> arr){
    if(arr.empty())
        return 0;
    
    sort(arr.begin(), arr.end());
    int maxLength = 1;
    int currentLength = 1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == arr[i-1] + 1) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else if(arr[i] != arr[i - 1]) {
            currentLength = 1;
        }
    }
    return maxLength;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2,5,6};
    cout << "Longest consecutive subsequence length: " << longest_consecutive(nums) << endl;
    return 0;
}