class Solution {
public:
    bool isLetter(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int st=0, end=s.length()-1;

        while(st < end){
            while(st < end && !isLetter(s[st])) st++;
            while(st < end &&!isLetter(s[end])) end--;

            if(st < end){
                swap(s[st], s[end]);
                st++; end--;
            }
        }
        return s;
        
    }
};