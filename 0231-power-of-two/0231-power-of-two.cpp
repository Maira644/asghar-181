class Solution {
public:
    bool isPowerOfTwo(int num) {
        if(num <= 0){
        return 0;
        }
        while(num % 2 == 0){
            num /= 2;
        }
        if(num == 1){
            return true;
        }else{
            return false;
        }
        return false;
            
    }
};