class Solution {
    bool binarySearch(vector<int> nums, int target, int s, int e){
        int mid = s+((e-s)/2);
        while(s<=e){
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                return binarySearch(nums, target, s, mid-1);
            }
            else{
                return binarySearch(nums, target, mid+1, e);
            }
        }
        return false;

    }  
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()>nums1.size()){
            vector<int> temp = nums2;
            nums2 = nums1;
            nums1 = temp;
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0;
        int ans;
        ans = min(nums1[0],nums2[0]);
        ans*=10;
        ans += max(nums1[0],nums2[0]);
        while(i<nums1.size()){
            if(binarySearch(nums2,nums1[i],0,nums2.size()-1)){
                return nums1[i];
            }
            i++;
        }
        return ans;
    }
};
