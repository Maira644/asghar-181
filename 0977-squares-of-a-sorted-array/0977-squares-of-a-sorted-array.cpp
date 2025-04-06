class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int> arr1;

        for(int i=0; i<arr.size(); i++){
            arr1.push_back(arr[i] * arr[i]);
        }
        sort(arr1.begin(), arr1.end());
        return arr1;
        
    }
};