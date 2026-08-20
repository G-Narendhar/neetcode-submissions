class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(const auto& s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            ans[sorted].push_back(s);
        }
        vector<vector<string>> ansr;
        for(auto& p : ans){
            ansr.push_back(p.second);
        }
        return ansr;
    }
};
