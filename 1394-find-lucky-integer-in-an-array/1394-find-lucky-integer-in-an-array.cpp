class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
    
    for (int num : arr) {
        freq[num]++;
    }

    int result = -1;
    for (auto& p : freq) {
        if (p.first == p.second) {
            result = max(result, p.first);
        }
    }

    return result;
        
    }
};