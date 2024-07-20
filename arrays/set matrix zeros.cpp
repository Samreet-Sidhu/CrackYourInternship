class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a,b;
        unordered_set<int> setRows; 
        unordered_set<int> setColumns;
    for (int i=0; i<matrix.size();i++){
       for (int j=0; j<matrix[i].size();j++){
        if (matrix[i][j]==0){
            setRows.insert(i);
            setColumns.insert(j);
        }
       } 
    } 
    for (int i=0; i<matrix.size();i++){
        for (int j=0; j<matrix[i].size();j++){
           if(setRows.count(i) > 0 || setColumns.count(j) > 0){
                    matrix[i][j] = 0;}
    }
   }
 }
};
