class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int ans = n;
        int i = 1;
        while(i<n){
            while(ratings[i-1]==ratings[i]){
                i++;
                if(i==n){
                    return ans;
                }
            }
            int peak = 0;
            while(ratings[i-1]<ratings[i]){
                peak++;
                ans+=peak;
                i++;
                if(i==n){
                    return ans;
                }
            }
            int valley = 0;
            while(i<n && ratings[i-1]>ratings[i]){
                valley++;
                ans+=valley;
                i++;
            }
            ans-=min(peak,valley);
        }
        return ans;
    }
};
