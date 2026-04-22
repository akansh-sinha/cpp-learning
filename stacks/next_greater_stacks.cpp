#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int>nextGreaterElement(vector<int>&nums){
    int n = nums.size();
    stack<int>st;
    vector<int>rslt(n,-1);

    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top() <= nums[i]){
            st.pop();
        }
        if(st.empty()){
            rslt[i] = -1;
            st.push(nums[i]);
            continue;
        }
        else{
            rslt[i] = st.top();
            st.push(nums[i]);
        }
    }
    return rslt;
}

int main(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    vector<int>rslt = nextGreaterElement(nums);
    for(int it: rslt){
        cout << it << " ";
    }
    return 0;
}
