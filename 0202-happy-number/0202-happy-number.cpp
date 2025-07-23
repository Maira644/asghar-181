class Solution {
public:
    bool isHappy(int n) {
        while(true){
            int sum = 0;
            while(n > 0){
                int rem = n % 10;
                n /= 10;
                int prod = rem * rem;
                sum += prod;
            }
            n = sum;
            if(n == 1){
                return true;
                break;
            }else if(n == 4){
                return false;
                break;
            }else continue;
        }
        return false;   
    }
};