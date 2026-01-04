#include <iostream>

int main(){
    int arr[]= {0,1,4,2,5,0,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int insertPos=0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] !=0){
            std::swap(arr[insertPos],arr[i]);
            insertPos++;
        }
        }
        for(int i = 0 ; i<n ; i++){
            std::cout << arr[i]<<" ";
        }
        return 0 ;
    }
