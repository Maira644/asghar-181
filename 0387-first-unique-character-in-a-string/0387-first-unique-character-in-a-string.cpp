class Solution {
public:
    int firstUniqChar(string& s) {
        unordered_map<char, int> freq;
        vector<char> order;
        char letter;


        for(int ch : s){
            if(freq.find(ch) == freq.end()){
                order.push_back(ch);
            }
            freq[ch]++;
        }

        for(char ch : order){
            if(freq[ch] == 1){
                letter = ch;
                break;
            }
        }

        for(int i=0; i<s.length(); i++){
            if(letter == s[i]){
                return i;
            }
        }
        return -1;
        
    }
}; 