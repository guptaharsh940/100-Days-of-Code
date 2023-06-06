class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int extra=0, total = 0, start = 0;
        for(int i =0 ; i<gas.size(); i++){
            extra += gas[i]-cost[i];
            total += gas[i]-cost[i];
            if(extra < 0){
                extra = 0;
                start = i+1;
            }
        
        }
            if(total <0){
                return -1;
            }
            return start;
    }
};
