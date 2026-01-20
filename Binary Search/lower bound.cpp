#include <iostream>
#include <vector>

using namespace std;
int binSearch(vector<int>&arr , int low , int high ,int k);
int main(){
    vector<int>arr= {1,5,7,8,9};
    int k = 6;
    int n = arr.size();

    int rIdx = binSearch(arr,0,n-1,k);
    cout <<rIdx;
    return 0 ;
}

int binSearch(vector<int>&arr ,int low ,int high , int k){
    int ans = high+1 ;
    

    while(low <= high){
        int mid = (low +high )/2;
        if(arr[mid] >= k){
            ans = mid;
            high = mid -1;
        }
        else
        low = mid + 1 ;
    }
    return ans;}
   