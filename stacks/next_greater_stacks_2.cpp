class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> opt(n);
        for(int i=(2*n)-1; i>=0; i--){
            while(!st.empty() && nums[i%n] >= st.top()){
                st.pop();
            }
            if(st.empty()){
                opt[i%n] = -1;
            }
            else{
                opt[i%n] = st.top();
            }
            st.push(nums[i%n]);
            continue;
        }
        vector<int>rslt(n);
        for(int i=0; i<n; i++){
            rslt[i] = opt[i];
        }
        return rslt;
    }
};