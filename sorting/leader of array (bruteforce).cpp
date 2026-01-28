class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i<arr.size(); i++){
            int currMax = -1;
            for(int j = i+1; j<arr.size(); j++){
                currMax = max(currMax , arr[j]);
            }
            arr[i] = currMax;
        }
        return arr;
    }
};