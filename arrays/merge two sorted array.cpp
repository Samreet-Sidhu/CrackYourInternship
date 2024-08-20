class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      // num1 k "m" elements k baad pointer intialize karwaya and uske baad num2 k element add kardo "n" tak
      //then do external sort
       for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());        
    }
};

//or this solution jaha pe hm pointers ko last se compare karna shuru karte hai

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;
//         int j = n - 1;
//         int k = m + n - 1;

//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };
