#include<iostream>

int main(){
    int arr[] = {4,5,2,3,1};
    int n = 5;
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            std::swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<< "  ";
    }
    return 0;
}