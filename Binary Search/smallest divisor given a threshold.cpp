class Solution {
public:

    bool possible(vector<int>&nums, int maxEl, int div, int threshold){
        int sum = 0;
        for(int i = 0 ; i<nums.size(); i++){
            sum += ceil(float(nums[i]) / div);
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size() > threshold){
            return -1;
        }

        int maxEl = *max_element(nums.begin(), nums.end());
        int low = 1;
        int high = maxEl;
        int potAns = maxEl;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(possible(nums, maxEl , mid, threshold)){
                potAns = mid;
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        return potAns;
    }
};