class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);

        if(isalpha(ch)){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        }
        return false;
    }

    bool isConsonant(char ch){
        ch = tolower(ch);

        if(isalpha(ch) && !isVowel(ch)) return true;
        return false;
    }
    bool isValid(string word) {
        if(word.length() < 3) return false;
        bool digit = false;
        bool vowel = false;
        bool consonant = false;
        bool alphabet = false;

        for(int i=0; i<word.length(); i++){
            if(!isalpha(word[i]) && !isdigit(word[i])) return false;
            else if(isVowel(word[i])){
                vowel = true;
                alphabet = true;
            }else if(isConsonant(word[i])){
                consonant = true;
                alphabet = true;
            }else if(isdigit(word[i])){
                digit = true;
            }
        }

        bool digOrAl = false;
        if(digit || alphabet){
            digOrAl = true;
        }

        if(digOrAl && vowel && consonant){
            return true;
        }
        return false;
        
    }
};