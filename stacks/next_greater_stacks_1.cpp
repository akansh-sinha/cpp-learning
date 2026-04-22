class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2 = nums2.size();
        int n1 = nums1.size();
        stack<int>st;
        vector<int>rslt(n2);

        for(int i=n2 -1 ; i>=0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty()){
                rslt[i] = -1;
                st.push(nums2[i]);
                continue;
            }
            else{
                rslt[i] = st.top();
                st.push(nums2[i]);
            }
        }
        unordered_map<int,int>mpp;
        for(int i=0; i<n2; i++){
            mpp[nums2[i]] = rslt[i];
        }
        vector<int>output(n1);
        for(int i=0; i<n1; i++){
            output[i] = mpp[nums1[i]];
        }
        return output;
    }
};