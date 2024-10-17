#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_product(vector<int>arr){
    int n =arr.size();
    if(n==0)
    return 0;
int maxprob = arr[0];
int minprob =arr[0];
int result = maxprob;

for(int i=1;i<n;i++){
    if (arr[i]<0){
        swap(maxprob,minprob);
    }
    maxprob = max(arr[i],maxprob * arr[i]);
    minprob =max(arr[i],minprob * arr[i]);
    result = max(result,maxprob);

}
return result;

}

int main(){
vector<int>arr= {2,3,-2,4};
int maxproduct = max_product( arr);
cout<<"maximum product: "<<maxproduct << endl;
return 0;
}