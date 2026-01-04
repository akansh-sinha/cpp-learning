#include <iostream>
#include <vector>
int main(){
    std::vector<int>nums = {1,2,2,2,3,5,6,77,89,89};
    int n = nums.size();

    int nextEl = 0;

    for(int i =0 ; i<n ;i++){
        if(nums[nextEl] ==nums[i])
        continue;
        else{
        nextEl++;
        nums[nextEl]= nums[i];
                }
    }
    for(int i = 0 ; i<n ; i++){
        std::cout << nums[i]<<" ";
    }
    return 0 ;
}