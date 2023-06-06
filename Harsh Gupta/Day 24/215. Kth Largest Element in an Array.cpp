class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i : nums){
            q.push(i);
        }
        int max, maxint=k;
        while(!q.empty() && maxint>0){
            max = q.top();
            maxint--;
            q.pop();
        }
        return max;
    }
};
