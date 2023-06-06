class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j=0,len=nums.size();
        int *temp = new int[len];
        
        for(int i=0; i<len; i++){
            temp[(i+k)%len] = nums[i];
        }
        
        for(int i=0; i<len; i++){
            nums[i] = temp[i];
        }
    }
};
