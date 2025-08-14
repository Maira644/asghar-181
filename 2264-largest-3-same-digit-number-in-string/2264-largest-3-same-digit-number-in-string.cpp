class Solution {
public:
    string largestGoodInteger(string num) {
        string finalStr = "";

        for(int i=0; i<num.length(); i++){
            string subnum = "";
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                subnum += num[i];
                subnum += num[i];
                subnum += num[i];
            }
            finalStr += subnum; 
        }
        sort(finalStr.begin(), finalStr.end(), greater<char>());
        return finalStr.substr(0, 3);
        
    }
};