class Solution {
public:
    string toLowerCase(string s) {
        string ascaii;
        for(char ch : s){
            ascaii += tolower(ch);
        }
        return ascaii;
        
    }
};