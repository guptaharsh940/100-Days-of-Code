class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        int temp1=0, temp2=0;
        for(char a : s){
            temp1+=a;
        }
        for(char a:t){
            temp2+=a;
        }
        ans = temp2-temp1;
        return ans;
    }
};
