class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> seen;  
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                // If the number is already in the seen set, it's a duplicate
                ans.push_back(num);
            }
            seen.insert(num);
        }
        return ans;
    }
};
