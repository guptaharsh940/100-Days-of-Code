class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for (int i = 0; i<s.length(); i++){
            if(distance[s[i]-97]==-1){
                continue;
            }
            if(distance[s[i]-97] + i+ 1 > s.length()-1){
                return false;
            }
            if(s[i] == s[i+distance[s[i]-97]+1]){
                distance[s[i]-97]=-1;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
