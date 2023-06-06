class Solution {
    int convert(char a){
        switch(a){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                retur 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
public:
    int romanToInt(string s) {
        int ans = 0;
        int i = 0;
        while(i<s.length()){
            if(i+1<s.length() && convert(s[i])<convert(s[i+1])){
                ans += (convert(s[i+1])-convert(s[i]));
                i+=2;
                continue;
            }
            ans += convert(s[i]);
            i++;
        }
        return ans;
    }
};
