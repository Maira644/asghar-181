class Solution {
public:
    string reverseWords(string str) {
        stringstream ss(str);
        string word;
        string ans = "";

        while(ss >> word){ 
            reverse(word.begin(), word.end());
            ans += word + " ";
        }
        return ans.substr(0, ans.size()-1);
        
    }
};