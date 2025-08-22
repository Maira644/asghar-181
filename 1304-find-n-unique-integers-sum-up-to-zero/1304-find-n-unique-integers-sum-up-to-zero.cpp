class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        int sum = 0;

        for(int i=1; i<n; i++){
            arr.push_back(i);
            sum += i;
        }

        arr.push_back(-sum);
        return arr;
        
    }
};