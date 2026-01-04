#include <iostream>
#include <vector>

int main(){
    std::vector<int>nums={1,2,3,4,5,6};
    int n = nums.size();
    int k ;
    std::cout<<"Shift left by:\n";
    std::cin>>k;

    if(k>n){
        k = k%n;
    }

    std::vector<int>arr(2*n,0);
    for(int i= 0;i<n;i++){
        arr[i]=nums[i];
        arr[n+i]=nums[i];
    }

    for(int i=0; i<n;i++){
        std::cout<<arr[i+k];
    }
    return 0 ;
}