#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
int main(){
    std::vector<int>nums={1,2,12,8,141,14,140,142,12};
    int currMax {INT_MIN};
    int currSecMax{INT_MIN};
    for(int i = 0 ; i<nums.size();i++){
        if(nums[i]>currMax)
        currSecMax=currMax;
        currMax = nums[i];
        else if(nums[i]<currMax && nums[i]>currSecMax)
        currSecMax = nums[i];
    }

    std::cout<< "Second largest element is :"<<currSecMax;
    return 0 ;}