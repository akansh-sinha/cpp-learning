#include<iostream>
#include<vector>

int main(){
    bool sort{true};
    std::vector<int>arr= {1,3,4,6,74,75,889,102};
    int n = arr.size();
    if(n<=1){
    std::cout<<"true";
    return 0;}

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        sort = false;
        break;}
        else 
        continue;}

        if(sort==1)
        std::cout <<"true";
        else 
        std::cout <<"false";
        return 0;
        
    }    
