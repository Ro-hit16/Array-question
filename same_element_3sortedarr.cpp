#include<iostream>
#include<vector>
using namespace std;
  vector<int> same_element(vector<int>arr1,vector<int>arr2,vector<int>arr3){
    int i=0;
    int j=0;
    int  k=0  ;
    vector<int>result;
    while(i <arr1.size() && j <arr2.size() && k <arr3.size() ){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {  
            result.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        
        }
        else if (arr2[j] <arr3[k]) {
           j++;
        }
        else{
            k++;
        }
    }
    return result;
}
int main(){
     vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

     vector<int> common_elements =  same_element( arr1,  arr2,  arr3);

     for(int num : common_elements){
        cout << num << " ";
     }
return 0;
}