class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int k=0,j=1;
        for(int i =0; i<nums.size();i++){
            if(nums[i]>0){
                ans[k]=nums[i];
                k+=2;
            }
            else if(nums[i]<0){
                ans[j]=nums[i];
                j+=2;
            }
        }
        return ans;
    }
};
