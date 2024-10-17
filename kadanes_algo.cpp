#include<iostream>
#include<vector>
using namespace std;
int kadanesalgo(vector<int>&arr){
    int maxsum = arr[0];
    int currentsum = arr[0];
    for(int i=1;i<arr.size();i++){
        currentsum = max(arr[i],currentsum+arr[i]);
       
        maxsum = max(maxsum,currentsum); 
        
    }
    return maxsum;
      
}
int main(){
     vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
     cout<<"maximum sum is"<<kadanesalgo(arr)<<endl;
return 0;
}       