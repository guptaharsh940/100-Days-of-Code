class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool flag;
        flag = n%2;
        n/=2;
        while(n>0){
            if((flag && n%2!=0) || (!flag && n%2==0)){
                return false;
            }
            flag = n%2;
            n/=2;
        }
        return true;
    }
};
