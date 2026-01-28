#include <iostream>

#include <vector>

using namespace std;

pair<int,int> binSearch(vector<int>&arr, int low, int high, int k);

int main(){
    vector<int>arr = {1,3,5,6};
    int k = 4;
    int n = arr.size();
    pair resIdx = binSearch(arr,0,n-1,k);
    cout << arr[resIdx.first] <<"   "<< arr[resIdx.second];
    return 0 ;
}

pair<int,int>  binSearch(vector<int>&arr, int low, int high, int k){
    int floor = -1;
    int ceil = -1 ;

    if(low > high)
    return {floor,ceil};

    while(low <= high){
        int mid = low +(high - low)/2;

        if(arr[mid] == k){
            floor = mid;
            ceil = mid ;
            return {floor , ceil};
        }
        else if(arr[mid] > k){
            high = mid-1;
            ceil = mid;
        }
        else{
            low = mid +1;
            floor = mid;
        }
    }
    return {floor , ceil};
}