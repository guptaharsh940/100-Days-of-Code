class Solution {
public:
    bool isPerfectSquare(int num) {
       int st = 1;
       while(st*st < num) {
           st += 1;
           if(st>46340){
               return false;
           }
       }
       if(st*st == num){
           return true;
       }
       else{
           return false;
       }
        return true;
    }
};
