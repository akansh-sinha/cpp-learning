class Solution {
public:

    bool possible(vector<int>&arr, int mid, int m, int k){
        int cnt = 0;
        int noOfB=0;
        for(int i =0 ; i<arr.size(); i++){
            if(arr[i] <= mid){
                cnt ++;
            }
            else{
                cnt =0;
            }
            if (cnt == k) {
                noOfB++;
                cnt = 0;
        }}
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < (long long)m*k){
            return -1;
        }

        int minEl = *min_element(bloomDay.begin(), bloomDay.end());
        int maxEl = *max_element(bloomDay.begin(), bloomDay.end());
        
        int low = minEl ;
        int high = maxEl; 
        int potAns = maxEl;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(possible(bloomDay, mid, m, k)){
                potAns = mid;
                high = mid - 1;
            }
            else {
                    low = mid + 1;
            }

        }
        return potAns;
        
    }
};