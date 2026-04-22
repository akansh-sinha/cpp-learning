class Solution {
public:
    bool isPossible(vector<int>&weights, int days, int cap){
        int daysUsed = 1;
        int currentLoad = 0;
        for(int i=0 ; i<weights.size(); i++){
            int temp = currentLoad + weights[i]; 
            if(temp > cap){
                daysUsed ++;
                currentLoad = weight[i];
            }
            else{
                currerntLoad = temp;
            }
        }
        return daysUsed <= days
    }

    
    int shipWithinDays(vector<int>& weights, int days) {
        int max = *max_element(weights.begin(), weights.end());
        int potCap = max * days ;
        
        int low = max;
        int high= potCap;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isPossible(weights,days,mid)){
                potCap = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return potCap ;
        
    }
};