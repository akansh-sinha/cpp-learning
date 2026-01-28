#include <iostream>
#include <vector>

using namespace std;

void binSearch(vector<int>&arr,int low, int high, int k);

int main(){
    vector<int>arr = {1,2,2,4,6,7,9};
    int n = arr.size();
    int k = 2;
    binSearch(arr,0,n-1,k);
    return 0;
}

void binSearch(vector<int>&arr,int low, int high, int k){
    int ans = arr.size();
    if(low > high)
    return ;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > k){
            ans = mid;
            high = mid-1;
        }
        else
        low = mid + 1;
    }
        cout << ans;

}
