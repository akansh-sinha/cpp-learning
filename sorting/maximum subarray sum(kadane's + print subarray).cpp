class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globMax = INT_MIN;
        int j = 0;
        int k = 0;
        int tempStart = 0;
        int sum = 0;

        for(int i = 0 ; i<nums.size(); i++){
            sum += nums[i];
            if(sum>globMax){
            globMax = sum;
            j = tempStart;}
            
            if(sum <= 0 ){
                sum = 0;
                tempStart = i+1;
            }
        }
        for(int i = j ; j<k; j++){
            cout << nums[j];
        }
        return globMax;
    }
};