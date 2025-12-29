#include<iostream>
#include<vector>

std::vector<int> userInput(){
    std::cout<<"Enter number of elements in array\n";
    int n ;
    std::cin>>n;
    std::cout<<"Enter the elements of the array\n";
    std::vector<int>vec(n);
    for(int i=0;i<n;i++){
        std::cin>>vec[i];
    }
    return vec;
}
void printOutput(std::vector<int>&outputArr){
     for (int i = 0 ;i<outputArr.size();i++){
        std::cout<<outputArr[i];
    }
}
int main(){
    std::vector<int>arr = userInput();
    int n = arr.size();
    int currMin {};
    for(int i =0;i<n;i++){
        currMin = i;
        for(int j =i ;j<n-1;j++){
            if(arr[j+1]<arr[currMin])
            currMin = j+1;
        }
        std::swap(arr[i],arr[currMin]);
    }
    printOutput(arr);
    return 0;
}