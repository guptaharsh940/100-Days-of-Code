class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        int t = -1;
        bool f = true;
        for(string word : words){
            t = -1;
            f = true;
        for(char i : word){
            if(i == word[0]){
                if(i=='q' || i=='w' || i=='e' || i=='r' || i=='t' || i=='y' || i=='u'|| i=='i' || i=='o' || i=='p' || i=='Q' || i=='W' || i=='E' || i=='R' || i=='T' || i=='Y' || i=='U'|| i=='I' || i=='O' || i=='P'){
                    t = 1;
                }
                else if(i=='a' || i=='s' || i=='d' || i=='f' || i=='g' || i=='h' || i=='j'|| i=='k' || i=='l' || i=='A' || i=='S' || i=='D' || i=='F' || i=='G' || i=='H' || i=='J'|| i=='K' || i=='L'){
                    t = 2;
                }
                else{
                    t = 3;
                }
            }
            else{
                if((i=='q' || i=='w' || i=='e' || i=='r' || i=='t' || i=='y' || i=='u'|| i=='i' || i=='o' || i=='p' || i=='Q' || i=='W' || i=='E' || i=='R' || i=='T' || i=='Y' || i=='U'|| i=='I' || i=='O' || i=='P') && t ==1){
                    continue;
                }
                else if((i=='a' || i=='s' || i=='d' || i=='f' || i=='g' || i=='h' || i=='j'|| i=='k' || i=='l' || i=='A' || i=='S' || i=='D' || i=='F' || i=='G' || i=='H' || i=='J'|| i=='K' || i=='L') && t == 2){
                    continue;
                }
                else if((i=='z' || i=='x' || i=='c' || i=='v' || i=='b' || i=='n' || i=='m' || i=='Z' || i=='X' || i=='C' || i=='V' || i=='B' || i=='N' || i=='M') && t == 3){
                    continue;
                }
                else{
                    f = false;
                    break;
                }
            }
        }
        if(f){
            ans.push_back(word);
        }
        }
        return ans;
    }
};