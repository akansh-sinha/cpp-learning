#include <iostream>
#include <vector>

using namespace std;

void bubSort(vector<int>&arr,int low,int high);

int main(){
    vector<int>arr = {5,4,4,1,1};
    int n = arr.size();
    bubSort(arr,0,n);
     for(auto it : arr){
        cout << it << " " ;
    }
    return 0;
}

void bubSort(vector<int>&arr,int low,int high){

    for(int i =0; i<high-1; i++){
        if(arr[i] >= arr[i+1]){
            swap(arr[i],arr[i+1]);
            bubSort(arr,0,i+1);
        }
    }
   
}