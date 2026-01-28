class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globMax = INT_MIN;
        for(int i = 0 ; i<nums.size(); i++){
            sum += nums[i];
            globMax = max(globMax , sum);
            
            if(sum <= 0)
            sum = 0;

        }
        return globMax;
    }
};