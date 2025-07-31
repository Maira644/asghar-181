class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0 || n < 0) return false;
        int orig = n;
        int prod = 1;

        while(n % 4 == 0){
            n /= 4;
            prod *= 4;
        }

        if(n == 1){
            if(orig == prod){
                return true;
            }  
        }
        return false;
        
    }
};