#include <iostream>
#include <map>

int main(){
    std::cout<<"enter number of elements in array\n";
     int n;
    std::cin >>n;
    int nums[n];
    std::cout << "enter array\n";
    for(int i = 0; i<n;i++){
        std::cin>>nums[i];
    }

    std::map<int,int> mpp;
    for(int i =0;i<n;i++){
        mpp[nums[i]]++; 
    }

    int maxFreq{0};
    for(auto it : mpp){
       if(it.second > maxFreq)
       maxFreq = it.second;  
    }
    for(auto it : mpp){
        if(it.second ==maxFreq ){
        std::cout << it.first;
        break;}
    }
    return 0;
}