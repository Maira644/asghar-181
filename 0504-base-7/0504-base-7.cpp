class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        bool isNegative = num < 0;
        num = abs(num);
        string str = "";

        while(num > 0){
            int rem = num % 7;
            str += to_string(rem);
            num /= 7;
        }
        reverse(str.begin(), str.end());

        if(isNegative)
        return "-" + str;

        return str;
        
    }
};