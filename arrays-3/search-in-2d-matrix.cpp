class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); //rows
        int n = matrix[0].size(); //cols

        int low = 0, high = m*n -1, mid = (m*n)/2;
        int row = 0, col = 0;
        
        while ( low <= high ){
            mid = (low + high)/2;

            row = mid / n;
            col = mid % n;

            if(matrix[row][col] == target){
                return true;
            } else if(matrix[row][col] > target ){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    }
};