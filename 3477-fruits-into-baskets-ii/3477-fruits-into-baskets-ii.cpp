class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int basketSpace = baskets.size();

        for(int i=0; i<fruits.size(); i++){
            for(int j=0; j<baskets.size(); j++){
                if(fruits[i] <= baskets[j] && baskets[j] != -1){
                    basketSpace--;
                    baskets[j] = -1;
                    break;
                }
            }
        }
        return basketSpace;
        
    }
};