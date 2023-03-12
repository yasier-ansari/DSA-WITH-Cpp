class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i =0;
        int m = matrix[0].size();
        int n = matrix.size();
        int j = m - 1;
        while(i <n && j>=0 ){
            if(matrix[i][j] == target){
                return true;
            }
            if( matrix[i][j] < target ){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};