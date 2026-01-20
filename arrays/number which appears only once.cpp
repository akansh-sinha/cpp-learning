#include <iostream>
#include <vector>

int main(){
    std::vector<int>nums = {1,2,3,2,1,3,5,4,4,6,7,7,6};
    int n = nums.size();
    int k = 0;
    for(int i = 0 ; i<n ; i++){
        k = k ^ nums[i];
    }
    std::cout<< k ;
    return 0 ;}