class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(numRows>=1){
            temp.push_back(1);
            ans.push_back(temp);
        }
        if(numRows>=2){
            temp.push_back(1);
            ans.push_back(temp);
        }
        int counter = 2;
        while(counter<numRows){
            temp.clear();
            temp.push_back(1);
            for(int i = 0; i<ans[counter-1].size()-1;i++){
                temp.push_back(ans[counter-1][i] + ans[counter-1][i+1]);
            }
            temp.push_back(1);
            counter++;
            ans.push_back(temp);
        }
        return ans;
    }
};
