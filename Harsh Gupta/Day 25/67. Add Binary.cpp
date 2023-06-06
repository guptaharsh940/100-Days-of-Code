class Solution {
public:
    string addBinary(string a, string b) {
        string a1,b1;
        if(a.length()>=b.length()){
            a1 = a;
            b1 = b;
        }
        else{
            a1 = b;
            b1 = a;
        }
        char c='0';
        int i ,j;
        for(i = a1.length()-1, j = b1.length()-1; i>=0 && j>=0; i--, j--){        
            if(a1[i]=='1' && b1[j]=='1' && c == '1'){
                a1[i]='1';
                c = '1';
            }
            else if((a1[i]=='1' && c=='1') || (b1[j]=='1' && c=='1') || (a1[i]=='1' && b1[j]=='1')){
                cout<<2;
                a1[i] = '0';
                c='1';
            }
            else if(a1[i]=='0' && b1[j]=='0' && c=='0'){
                a1[i]='0';
            }
            else{
                a1[i]='1';
                c='0';
            }
        }
        if(c=='1'){
        while(i>=0){
            if(a1[i]=='1' && c=='1'){
                a1[i]='0';
                c='1';
            }
            else if(c=='1'){
                a1[i]='1';
                c='0';
            }
            i--;
        }
        if(c=='1'){
            a1 = '1'+a1;
        }}
        return a1;
    }
};
