class Solution {
public:
    string toLowerCase(string s) {
        for(char &i :s){
            if(i>=65 && i<=90){
                i+=32;
            }
        }
        return s;
    }
};
