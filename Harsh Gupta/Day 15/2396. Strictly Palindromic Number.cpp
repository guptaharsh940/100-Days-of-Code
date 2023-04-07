class Solution {
private:
    string base(int n, int b){
        string a = "";
        while(n>=1){
            a = to_string(n%b) + a;
            n/=b;
        }
        return a;
    }
    bool isPalindrome(string a){
        int i = 0; 
        int j = a.length()-1;
        while(i<j){
            if(a[i]!=a[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }

public:
    bool isStrictlyPalindromic(int n) {
       for(int i = 2; i<n; i++) {
           if(isPalindrome(base(n,i))) continue;
           else return false;
       }
       return true;
    }
};
