#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

  void nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums2.size(); i++){
            mpp[nums2[i]] = i;
        }
        int n1 = nums1.size();
        vector<int>rslt(n1, -1);

        for(int i=0; i<nums1.size(); i++){
            int eqvIdx = mpp[nums1[i]];
            for(int j= eqvIdx; j<nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    rslt[i] = nums2[j];
                    break;
                }
            }
        }
        for(int &it: rslt){
            cout << it << " ";
        }
    }
        

int main(){
    int n1 , n2;
    cin >> n1 >> n2;
    vector<int>nums1(n1, 0);
    vector<int>nums2(n2, 0);
    for(int &it: nums1){
        cin >> it;
    }
        for(int &it: nums2){
        cin >> it;
    }
    nextGreaterElement(nums1, nums2);
    return 0;
}