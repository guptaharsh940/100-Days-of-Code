class Solution {
private:
    int solve(vector<int> arr, int in){
        int temp=INT_MIN;
        int ans = 0;
        for(int i = 0; i<=in ; i++){
            if(arr[i]>temp){
                temp = arr[i];
            }
            else{
                ans+=(temp-arr[i]);
            }
        }
        return ans;
    }
public:
    int trap(vector<int> &height){
        int max=0;
        for(int i = 1; i<height.size(); i++){
            if(height[max]<height[i]){
                max =i;
            }
        }
        vector<int> temp;
        for(int i = height.size()-1; i>=max; i--){
            temp.push_back(height[i]);
        }
        return (solve(height,max) + solve(temp, temp.size()-1));
    }
};
