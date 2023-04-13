class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> ans;
        vector<int> temp;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        for(int i:nums1){
            if(binary_search(nums2.begin(),nums2.end(),i)){
                continue;
            }
            else if(temp.size()>0 && temp[temp.size()-1]==i){
                continue;
            }
            else{
                temp.push_back(i);
            }
        }
        ans.push_back(temp);
        temp.clear();
        for(int i:nums2){
            if(binary_search(nums1.begin(),nums1.end(),i)){
                continue;
            }
            else if(temp.size()>0 && temp[temp.size()-1]==i){
                continue;
            }
            else{
                temp.push_back(i);
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
