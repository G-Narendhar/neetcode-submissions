class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto const& [val, freq] : counts) {
            pq.push({freq, val});
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};
