#include<iostream>
#include<map>
int main(){
    int n;
    std::cout<<"enter number of elements in array\n";
    std::cin>>n;
    int nums[n];
    std::cout<<"Enter array\n";
    for(int i =0;i<n;i++){
        std::cin>>nums[i];
    }
    std::map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    int maxFreq{0};
    for(auto it :  mpp){
        if(it.second >maxFreq)
        maxFreq = it.second;
    }
    for(auto it:mpp){
        if(it.second == maxFreq)
        std::cout <<it.first;
    }
    return 0;
}