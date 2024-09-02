class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> s; // Stack to store indices of temperatures
        
        for (int i = 0; i < n; ++i) {
            // if condition satisfy than 
            //temperature at the index stored at the top of the stack
            while (!s.empty() && temp[i] > temp[s.top()]) {
                int prevIndex = s.top();
                s.pop();
                ans[prevIndex] = i - prevIndex; // Calculate the number of days
            }
            // Push the current index onto the stack
            s.push(i);
        }
        
        return ans;
    }
};
