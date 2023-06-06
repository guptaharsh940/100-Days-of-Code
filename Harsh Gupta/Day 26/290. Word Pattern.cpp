class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream str(s);
        string temp;
        vector<string> stringv;
        vector<string> patternv;
        while(str>>temp){
            stringv.push_back(temp);
        }
        
        if(stringv.size()!=pattern.length()){
            return false;
        }
        unordered_map<char,string> m;
        unordered_map<string,char> m2;
        for(int i = 0; i<pattern.length(); i++){
            if(m.find(pattern[i]) == m.end() && m2.find(stringv[i]) == m2.end() ){
                m[pattern[i]]=stringv[i];
                m2[stringv[i]] = pattern[i];
                
            }
            else{
                if(m[pattern[i]]!=stringv[i] || m2[stringv[i]]!=pattern[i]){
                    return false;
                }
            }
        }
        return true;

    }
};
