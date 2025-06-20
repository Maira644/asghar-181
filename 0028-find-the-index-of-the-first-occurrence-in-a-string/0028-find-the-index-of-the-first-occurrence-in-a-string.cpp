class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);

        if(0 <= found <= 9){
        return found;
        }
        return -1;
        
    }
};