#include<iostream>
#include<vector>
using namespace std;
int maxproduct(vector<int>arr){
    int n=arr.size();
    int leftproduct = 1;
    int rightproduct = 1;
    int ans =arr[0];
    for(int i=0;i<n;i++){
        leftproduct = leftproduct == 0 ? 1 : leftproduct;//tannaery oprrator
        rightproduct= rightproduct == 0 ? 1: rightproduct;

        leftproduct *=arr[i];

        rightproduct *= arr[n-1-i];

        ans = max(ans ,max(leftproduct ,rightproduct));
    }
  return ans;
}
int main(){
vector<int>arr={ 0,3,-2,-5,6,-1,4};
cout<<"maximum product of subarr is "<<maxproduct( arr);
return 0;
}