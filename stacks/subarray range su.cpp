class Solution {
public:
    vector<int>nsei(vector<int>&nums){
        int n = nums.size();
        stack<int>st;
        vector<int>nseiArr(n);
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && nums[i] < nums[st.top()]){
                st.pop();
            }
            nseiArr[i] = !st.empty()? st.top() : n;

            st.push(i);
        }
        return nseiArr;
    }
    vector<int>pseei(vector<int>&nums){
          int n = nums.size();
        stack<int>st;
        vector<int>pseeiArr(n);
        for(int i = 0; i<n; i++){
            while(!st.empty() && nums[i] <= nums[st.top()]){
                st.pop();
            }
            pseeiArr[i] = !st.empty()? st.top() : -1;

            st.push(i);
        }
        return pseeiArr;
    }
    vector<int>ngei(vector<int>&nums){
          int n = nums.size();
        stack<int>st;
        vector<int>ngeiArr(n);
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && nums[i] > nums[st.top()]){
                st.pop();
            }
            ngeiArr[i] = !st.empty()? st.top() : n;

            st.push(i);
        }
        return ngeiArr;
    }
    vector<int>pgeei(vector<int>&nums){
          int n = nums.size();
        stack<int>st;
        vector<int>pgeeiArr(n);
        for(int i = 0; i<n; i++){
            while(!st.empty() && nums[i] >= nums[st.top()]){
                st.pop();
            }
            pgeeiArr[i] = !st.empty()? st.top() : -1;

            st.push(i);
        }
        return pgeeiArr;
    }
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int>ngeiArr = ngei(nums);
        vector<int>pgeeiArr = pgeei(nums);
        vector<int>nseiArr = nsei(nums);
        vector<int>pseeiArr = pseei(nums);
       
        vector<long long>MaxFreqArr(n);
        vector<long long>MinFreqArr(n);
        for(int i=0; i<nums.size(); i++){
            MaxFreqArr[i] = 1LL * (ngeiArr[i] - i) * (i - pgeeiArr[i]);
            MinFreqArr[i] = 1LL * (nseiArr[i] - i) * (i - pseeiArr[i]);
        }

        long long sum = 0; 
        for(int i=0; i < nums.size(); i++){
            sum += nums[i] * MaxFreqArr[i] - nums[i]* MinFreqArr[i];
        }
        return sum;
    }
};