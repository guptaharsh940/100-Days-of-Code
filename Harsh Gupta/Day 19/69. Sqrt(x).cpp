class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        long long int mid = start + ((end-start)/2);
        if(x==0){
            return 0;
        }
        while(start < end) {
            if(mid*mid == x || ((mid*mid)<x && (mid+1)*(mid+1)>x)){
                return mid;
            }
            else if(mid*mid>x){
                end = mid;
            }
            else{
                start = mid+1;
            }
            mid = start + ((end-start)/2);
        }
        return start;

    }
};
