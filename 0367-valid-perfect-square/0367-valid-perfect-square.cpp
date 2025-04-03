class Solution {
public:
    bool isPerfectSquare(int num) {
        int result = sqrt(num);
        if(result * result == num){
            return true;
        }else{
            return false;
        }
        return false;
        
    }
};