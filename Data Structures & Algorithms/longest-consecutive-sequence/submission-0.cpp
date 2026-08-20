#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> s(nums.begin(), nums.end()); // O(n)
        int longest = 0;

        for (int num : s) {
                if (!s.count(num - 1)) {
                int currNum = num;
                int currLen = 1;
                while (s.count(currNum + 1)) {
                    currNum++;
                    currLen++;
                }

                longest = max(longest, currLen);
            }
        }

        return longest;
    }
};
