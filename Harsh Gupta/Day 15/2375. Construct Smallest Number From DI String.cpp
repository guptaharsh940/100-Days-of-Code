class Solution {
private:
    bool check(string s, string pattern){
        for(int i = 0; i< pattern.size();i++){
            if(pattern[i]=='I' && s[i]<s[i+1]){
                continue;
            }
            else if(pattern[i]=='D' && s[i]>s[i+1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string permute(string s , int index, string pattern){
        if(index >= s.length()){
            if(check(s,pattern)){
                return s;
            }
            return "-1";
        }
        string ans;
        string temp;
        for(int i = index; i< s.size(); i++){
            swap(s[index], s[i]);
            temp = permute(s,index+1,pattern);
            if(temp != "-1"){
                return temp;
            };
            swap(s[index],s[i]);
        }
        return temp;
    }
public:
    string smallestNumber(string pattern) {
        string s = "";
        for(int i = 1; i<=pattern.size()+1; i++){
            s+=to_string(i);
        }
        return permute(s, 0, pattern);
    }
};
