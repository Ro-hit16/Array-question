#include <iostream>
using namespace std;


// Function to calculate factorial recursively
long long factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n* factorial(n-1);
    }
}

int main() {
    int num = 5; // Change num to any number for which you want to calculate factorial

    unsigned long long result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}
