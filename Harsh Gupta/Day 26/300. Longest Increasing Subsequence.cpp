class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> a;
        for(int i = 0; i<nums.size(); i++){
            if(i==0){
                a.push_back(nums[i]);
            }
            if(nums[i]>a[a.size()-1]){
                a.push_back(nums[i]);
            }
            else{
                auto pos = lower_bound(a.begin(), a.end(), nums[i]);
                *pos = nums[i];
            }
        }
        return a.size();
    }
};
