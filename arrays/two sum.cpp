class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int i=0; i< nums.size(); i++)
        {
           int comp = target - nums[i];                     //calculating complement
            if (mp.count(comp)) {                          //agar map me voh complement hai toh uss comp ki id and i return hoga
                return {mp[comp], i}; 
            }
            mp[nums[i]]=i;                              //else map me voh element nums[i] and uska index i add ho jayega 
        }
        return {};// if there is none
    }
};
