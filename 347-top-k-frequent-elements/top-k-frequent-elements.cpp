class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        // Step 2: Create buckets
        // index = frequency
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it : mp) {
            int num = it.first;
            int freq = it.second;

            bucket[freq].push_back(num);
        }

        // Step 3: Traverse from highest frequency
        vector<int> ans;

        for (int freq = nums.size(); freq >= 1; freq--) {

            for (int num : bucket[freq]) {
                ans.push_back(num);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};