class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;

        bool isAbsent = true;
        bool isLeave = true;

        for(int i=0; i<s.length(); i++){
            if(s[i] == 'A'){
                A++;
            }
        }
        if(A >= 2){
            isAbsent = false;
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'L'){
                if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                    isLeave = false;
                }
            
            }
        }
        if(isAbsent == false || isLeave == false){
            return false;
        }
        return true;
        
        
    }
};