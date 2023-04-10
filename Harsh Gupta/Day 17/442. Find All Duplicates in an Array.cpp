class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dups;
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<nums.size()-1){
            
            if(nums[i]==nums[i+1]){
            
                dups.push_back(nums[i]);
                i+=2;    
            }
            else{i++;}
            
        }
            
        
        return dups;
    }
};
