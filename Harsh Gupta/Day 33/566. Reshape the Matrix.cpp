class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size()){
            return mat;
        }
        vector<int> temp(c,0);
        vector<vector<int>> ans(r,temp);
        int a=0,b=0;
        for(int i = 0; i<mat.size(); i++){
            for(int j =0; j<mat[i].size(); j++){
                ans[a][b]=mat[i][j];
                b++;
                if(b>=c){
                    a++;
                    b=0;
                }
            }
        }
        return ans;
    }
};
