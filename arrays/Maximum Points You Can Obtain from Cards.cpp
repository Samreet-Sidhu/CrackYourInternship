class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i = 0;               // Start index for the sliding window
        int j = 0;               // End index for the sliding window
        int currSum = 0;         // Sum of the current sliding window
        int totalSum = 0;        // Total sum of all card points
        int ans = 0;             // Maximum score found
        
        // Calculate the total sum of all card points
        for (auto i : cardPoints) totalSum += i;
        
        // If k is equal to the number of card points, pick all cards
        if (k == cardPoints.size()) return totalSum;
        
        // Sliding window approach to find the minimum sum of n - k cards
        while (j < cardPoints.size()) {   
            currSum += cardPoints[j];
            // If the current window size is less than n - k, keep expanding
            if (j - i + 1 < cardPoints.size() - k) {
                j++;
            }
            // When the window size reaches n - k, calculate the score and adjust window
            else {
                ans = max(ans, totalSum - currSum); // Calculate score and update answer
                currSum -= cardPoints[i];            // Slide the window
                i++;                                 // Move the start index
                j++;                                 // Move the end index
            }
        }
        return ans;
    }
};
