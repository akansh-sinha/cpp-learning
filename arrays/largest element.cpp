#include <iostream>
#include <vector>

int main(){
    std::vector<int>nums={1,2,12,8,141,12};
    int currMaxIdx {0};

    for(int i=0;i<nums.size();i++){
        if(nums[i]>nums[currMaxIdx])
        currMaxIdx = i ;
    }
    
    std::cout << "max element is :"<<nums[currMaxIdx];
    return 0 ;
}