#include <iostream>
#include <algorithm>

int main(){
    int arr[]={0,1,0,84,654,0,-456,4,0,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i =n-1 ; i>=0 ; i--){
        if(arr[i]==0){
            int j = i;
            while(j<n-1){
                std::swap(arr[j],arr[j+1]);
                j++;
            }
        }
    }
    for(int i = 0 ; i<n ; i++){
        std::cout << arr[i] <<" ";
    }
    return 0 ;
}