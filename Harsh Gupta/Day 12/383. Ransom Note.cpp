class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        for(char a : magazine){
            m[a]++;
        }
        for(char a : ransomNote){
            if(m[a]){
                m[a]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
