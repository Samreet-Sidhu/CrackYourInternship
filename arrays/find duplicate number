class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int i=0; i<nums.size(); i++){
            if (set.count(nums[i])){             //for each element if it is available in the set then return that number
                return {nums[i]}; 
            }
            set.insert(nums[i]);                 //else push that number to the set
        }
        return {};
    }
};
