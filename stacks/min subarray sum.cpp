class Solution {
public:
    vector<int> findNse(vector<int>&arr){
        int n = arr.size();
        vector<int>nse(n);
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                st.push(i);
                nse[i] = n;
            }
            else{
                nse[i] = st.top();
                st.push(i);
            }
        }
        return nse;
    }
    vector<int> findPse(vector<int>&arr){
        int n = arr.size();
        vector<int>pse(n);
        stack<int>st;
        for(int i= 0; i<n; i++){
            while(!st.empty() && arr[i] < arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                st.push(i);
                pse[i] = -1;
            }
            else{
                pse[i] = st.top();
                st.push(i);
            }
        }
        return pse;
    }

    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nse = findNse(arr);
        vector<int>pse = findPse(arr);
        int k = (long long)(1e9 + 7);
        long long sum = 0;
        for(int i=0; i<arr.size(); i++){
            int right = nse[i] - i;
            int left = i - pse[i];
            sum = sum + 1LL*right*left*arr[i];
            sum = sum % k;
        }
        return (int)sum;
    }
};