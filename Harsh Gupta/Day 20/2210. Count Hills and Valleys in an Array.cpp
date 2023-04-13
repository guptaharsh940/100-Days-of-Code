class Solution {
public:
    int countHillValley(vector<int>& nums) {
       int i = 0, j = 1, k = 2;
       int ans = 0;
       while(k<nums.size()) {
           if((nums[i]<nums[j] && nums[k]<nums[j]) || (nums[i]>nums[j] && nums[k]>nums[j])){
               ans++;
               i = j;
               j = k;
               k++;
           }
            else if(nums[k]==nums[j]){
                k++;
            }
            else{
                i = j;
               j = k;
               k++;
            }
       }
       return ans;
    }
};
