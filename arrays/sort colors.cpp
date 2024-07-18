class Solution {
public:
    void sortColors(vector<int>& nums) {
     int z =0;
     int o =0;
     for (int i=0; i<nums.size();i++)
    {
     if(nums[i]==0) z++;
     else if (nums[i]==1) o++;
    }
    for(int i=0; i<nums.size();i++){
        if (i<z ) {nums[i]=0;}
        else if (i<=z+o-1) {nums[i]=1;}
        else if (i<=nums.size()-1) {nums[i]=2;}
    }
    }
};
