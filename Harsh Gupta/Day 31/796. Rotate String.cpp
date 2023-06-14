class Solution {
public:
    bool rotateString(string s, string goal) {
        char p = goal[0];
        int in;
        int len = s.length();
        if(len!=goal.length()){
            return false;
        }
        bool ans = true;
        for(nt i = 0; i<len;i++){
            if(s[i]==p){
                ans =true;
                in = i;  
                for(int j=0; j<len; j++){
                    if(goal[j]!=s[(in+j)%len]){
                        ans =false;
                        break;
                    }
                }
                if(ans){
                return true;}
            }
        }
        return false;
    }
};
