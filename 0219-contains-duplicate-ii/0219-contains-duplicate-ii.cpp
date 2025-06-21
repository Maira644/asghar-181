class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;  // store last k elements

        for (int i = 0; i < nums.size(); i++) {
            if (window.find(nums[i]) != window.end()) {
                return true;  // found duplicate within k distance
            }

            window.insert(nums[i]);

        // maintain the window size
            if (window.size() > k) {
                window.erase(nums[i - k]);  // remove the element that's now too far
            }
        }

        return false;
    }  
};