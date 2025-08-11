class Solution {
public:
    bool checkPerfectNumber(int num) {
        int orig = num;
        int sum = 0;
        int i=1;

        while(i < num){
            if(num % i == 0){
                sum += i;
            }
            i++;
        }
        if(orig == sum) return true;
        return false;
        
    }
};