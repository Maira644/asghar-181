class Solution {
public:
    bool isVowel(char ch){
        if(tolower(ch)=='a' || tolower(ch)=='e' || tolower(ch)=='i' || tolower(ch)=='o' ||    tolower(ch)=='u'){
            return true;
        }else{
            return false;
        }
}

    string reverseVowels(string s) {
        int st = 0, end = s.length()-1;

        while(st < end){
            if(!isVowel(s[st])) st++;
            else if(!isVowel(s[end])) end--;
            else{
                swap(s[st], s[end]);
                st++; end--;
            }
        }
        return s;
        
    }
};