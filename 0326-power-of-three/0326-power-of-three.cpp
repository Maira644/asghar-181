class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0 || n < 0) return false;
        int orig = n;
        int prod = 1;

        while(n % 3 == 0){
            n /= 3;
            prod *= 3;
        }

        if(n == 1){
            if(orig == prod){
                return true;
            }  
        }
        return false;
        
    }
};