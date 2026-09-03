class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;

        // Step 1: Find minimum odd number
        for (int x : nums1) {
            if (x % 2 == 1) {
                minOdd = min(minOdd, x);
            }
        }

        // Step 2: Check even numbers
        for (int x : nums1) {
            if (x % 2 == 0 && minOdd != INT_MAX) {
                if (x < minOdd) {
                    return false;
                }
            }
        }

        return true;
    }
};