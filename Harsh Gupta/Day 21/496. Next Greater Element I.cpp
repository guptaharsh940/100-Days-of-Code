class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int temp;
        bool t;
        for(int i : nums1){
            temp = -1;
            t = false;
            for(int j = 0; j<nums2.size(); j++){
                if(!t && i==nums2[j]){
                    t = true;
                }
                if(t && nums2[j]>i){
                    temp = nums2[j];
                    break;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};