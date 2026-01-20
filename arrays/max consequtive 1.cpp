#include <iostream>
#include<vector>

int main(){
    std::vector<int>nums = {1,1,1,0,0,1,1,1,1,1,0,0,1,1};
    int n = nums.size();

    int cntr1 = 0 ;
    int cntr2 = 0 ;
    
    for(int i = 0; i<n ; i++){
        if(nums[i]==1){
            cntr1 ++;
        if(cntr1 > cntr2)
        cntr2 = cntr1 ;}
    else 
    cntr1 = 0 ;}
std::cout <<cntr2 ;
return 0 ;}