#include <iostream>
#include <vector>
#include <algorithm>
 

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty())
        return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); ++i){ 
        minPrice = min(minPrice, prices[i]);
      
        maxProfit = max(maxProfit, prices[i] - minPrice);
        cout<<maxProfit;
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
