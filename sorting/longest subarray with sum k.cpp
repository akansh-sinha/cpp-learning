#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

lenLongSubArr(vector<int>&nums, int k){
    int n = nums.size();
    unordered_map<int,int>mpp;
    int currSum = 0;
    for(int i = 0 ; i<n; i++){
        currSum += nums[i];
        if(mpp.find(currSum) == mpp.end())
        mpp[currSum] = i;
    }
    int currMaxLen = 0;

    for(auto it: mpp){
        if(it.first == k){
            int newMaxLen = it.second + 1;
            currMaxLen = max(currMaxLen , newMaxLen);}
        if(it.first > k){
            int req = it.first - k;
            if(mpp.find(req) != mpp.end()){
                currMaxLen = max(currMaxLen , it.second -mpp[req]);
            }
        }
    }
    return currMaxLen;
}

int main(){
    vector<int>nums = {10,5,2,7,1,9};
    int k = 15;
    cout<<lenLongSubArr(nums, k);
    return 0;
}