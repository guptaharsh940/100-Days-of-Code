class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans =0;
        int i = cost.size()-1;
        while(i>=0){
            if(i>=2){
                ans+=cost[i]+cost[i-1];
                i-=3;
                // cout<<ans<<endl;
            }
            else if(i==1){
                ans+=cost[i]+cost[i-1];
                i-=2;
            }
            else{
                ans+=cost[i];
                i--;
            }
        }
        return ans;
    }
};
