class Solution {
private:
    bool isPalindrome(string s){
        if(s.length()==1){
            return true;
        }
        int i = 0, j = s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    void resulter(string s, int start, int end , vector<vector<string>> &ans, vector<string> temp){
        if(start >= end){
            return;
        }
        string t;
        for(int i = start; i<end; i++){
            if(i==start){
            t = s[i];
            temp.push_back(t);
            resulter(s,i+1,end,ans,temp);
            continue;}
            if(isPalindrome(t+s[i])){
                t += s[i];
                temp[temp.size()-1] = t;
                resulter(s,i+1,end,ans,temp);
            }
            else if(i==end-1){
                return;
            }
            else{
                t += s[i];
            }
        }
        ans.push_back(temp);
        return;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        resulter(s, 0, s.size(), ans, temp);
        return ans;
    }
};
