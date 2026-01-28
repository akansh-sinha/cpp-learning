class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int rsltMax = 0;
        for(int i =0; i<nums.size(); i++){
            int currMax = 0;
            for(int j=i; j<nums.size(); j++){
                currMax += nums[j];
                rsltMax = max(rsltMax , currMax);
            }
        }
        return rsltMax ;
    }
};