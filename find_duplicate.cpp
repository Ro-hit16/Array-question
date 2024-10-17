#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    int tortoise = nums[0];
    int hare = nums[0];

  
    do {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while (tortoise != hare);

  
    tortoise = nums[0];
    while (tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }

    return hare;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,11, 12, 13, 14, 15};

    int duplicate = findDuplicate(nums);
    cout << "Duplicate: " << duplicate << endl;

    return 0;
}
