class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0;
        int r = 0 ;
        int diffLtrs = 0;
        int longestSubStrng = 0;
        int maxFreq = 0;
        int hashArr[26] = {0};

        while(r < n){
           hashArr[s[r] - 'A']++ ;
           maxFreq = max(maxFreq, hashArr[s[r] - 'A']);
           diffLtrs = (r-l+1) - maxFreq;
           while(diffLtrs > k){
            hashArr[s[l] - 'A']--;
            maxFreq = 0;
            for(int i=0; i<26; i++){
                maxFreq = max(maxFreq, hashArr[i]);
            }
            l++;
           diffLtrs = (r-l+1) - maxFreq;
           }
           longestSubStrng = max(longestSubStrng, (r-l+1));
           r++;
        }
        return longestSubStrng;
        
    }
};
