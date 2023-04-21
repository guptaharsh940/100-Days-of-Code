class Solution {
public:
    int lengthOfLastWord(string s) {
       vector<string> a;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        a.push_back(temp);
    }
    return a[a.size()-1].length();
    }
};
