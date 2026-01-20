#include <iostream>
#include <vector>

using namespace std;
void bubSort(vector<int>&arr, int n);

int main(){
    vector<int>arr={3,2,5,1,9,4,1,5,3};
    int n = arr.size();
    bubSort(arr,n);
    for(auto it : arr)
    cout << it <<" ";
    return 0;
}

void bubSort(vector<int>&arr,int n){

    if(n<=1)
    return ;
    for(int i= 0; i<n-1; i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bubSort(arr,n-1);
}