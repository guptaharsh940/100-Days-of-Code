class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256,-1);
        int ans =0 ;
        int start = -1;
        for(int i = 0; i<s.length(); i++){
            if(m[s[i]] > start){
                start = m[s[i]];
            }
            m[s[i]] = i;
            if(ans<i-start){
                ans = i-start;
            }
        }
            return ans;
    }
};
