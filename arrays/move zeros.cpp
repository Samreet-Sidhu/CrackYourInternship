class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int j=0;
        for(int i= 0; i<nums.size();i++){
            if (nums[i]!=0){
                nums[j]= nums[i];
                 j++;
            }
        }
        for (int i=j; i<nums.size(); i++){
            nums[i]=0;
        }
    // it swaps unnecessarily ex: [1,2] it gives output [2,1]
    //    int left=0;
    //     for (int right=1; right<nums.size();right++){
    //         if (nums[right]!=0){
    //             swap(nums[left], nums[right]);
    //             left++;
    //         }
    //     }
    }
};
