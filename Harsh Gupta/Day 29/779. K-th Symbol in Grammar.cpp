class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1){
            return 0;
        }
        if(k&1){
            if(kthGrammar(n-1,(k+1)/2)){
                return 1;
            }
            else{
                return ;
            }
        }
        else{
            if(kthGrammar(n-1,k/2)){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
};
