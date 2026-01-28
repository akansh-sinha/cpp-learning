class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0 ; 
        int cdt = -1 ;

        for(int i=0; i<nums.size(); i++){
          if(cnt==0)cdt++;

          if(nums[i]==nums[cdt])cnt++;

          else if(nums[i]!=nums[cdt])cnt--;
    }
    return nums[cdt];
};