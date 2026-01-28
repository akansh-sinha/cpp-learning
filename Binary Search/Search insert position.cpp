#include <iostream>

#include <vector>

using namespace std;

int binSearch(vector<int>&arr, int low, int high, int k);

int main(){
    vector<int>arr = {1,3,5,6};
    int k = 4;
    int n = arr.size();
    int resIdx = binSearch(arr,0,n-1,k);
    cout << resIdx;
    return 0 ;
}

int binSearch(vector<int>&arr, int low, int high, int k){
    int ans = high+1;
    if(low > high)
    return ans;

    while(low <= high){
        int mid = low +(high - low)/2;

        if(arr[mid]==k)
        return mid;

        else if(arr[mid]>k){
            ans = mid;
            high = mid -1;
        }
        else
        low = mid +1;
        
    }
    return ans;
}