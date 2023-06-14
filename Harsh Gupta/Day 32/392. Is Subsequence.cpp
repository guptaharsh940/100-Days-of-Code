class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tab=0;
        for(int i =0; i<t.length(); i++){
            if(tab<s.length() && s[tab]==t[i]){
                tab++;
            }
        }
        return (tab==s.length());
    }
};
