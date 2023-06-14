class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        for(int i = 0; i<s.length(); i++){
            if(m1.find(s[i])==m1.end()){
                m1[s[i]]=t[i];
            }
            if(m2.find(t[i])==m2.end()){
                m2[t[i]]=s[i];
            }
            if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]){
                return false;
            }
        }
        return true;

    }
};