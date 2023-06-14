class Solution {
    int dist(vector<int> ghost, vector<int> pac){
        return abs(ghost[0]-pac[0])+abs(ghost[1]-pac[1]);
    }
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        vector<int> start = {0,0};
        int mindist = dist(target,start);
        int temp;
        for(vector<int> a:ghosts){
            temp = dist(a,target);
            if(mindist>=temp){
                return false;
            }
        }
        return true;
    }
};
