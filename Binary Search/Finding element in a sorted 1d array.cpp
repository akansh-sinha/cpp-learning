#include <iostream>
#include <vector>

using namespace std;
int binSearch(vector<int>&arr , int low , int high ,int k);
int main(){
    vector<int>arr= {1,5,6,7,8};
    int k = 5;
    int n = arr.size();

    int rIdx = binSearch(arr,0,n-1,k);
    cout <<rIdx;
    return 0 ;
}

int binSearch(vector<int>&arr ,int low ,int high , int k){
    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid]==k)
        return mid;
        else if(arr[mid]>k)
        high = mid - 1;
        else
        low = mid+1;
    }
    return -1;
}