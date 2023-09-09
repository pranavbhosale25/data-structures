class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*
        Method #1 
        1. Take Mirror Image 
        2. Swap along right diagonal

        Alternatively, you can: 
        1. Transpose : (i,j) -> (j,i)
        2. Reverse each row 

        Method #2 is much simpler
        */



        int n = matrix.size();
        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n/2 ; j++){
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
        
        for( int i = 0 ; i < n-1 ; i++ ){
            for( int j = 0 ; j < n-1-i ; j++){
                swap(matrix[i][j], matrix[n-1-j][n-1-i]);
            }
        }



        // int n = matrix.size();

        // for( int i = 0 ; i < n ; i++){
        //     int currRow = i;
        //     // int currCol = j;
        //     for( int j = 0 ; j < n ; j++){

        //         int newRow = j;
        //         int newCol = n-1 -i;

        //         int temp = matrix[newRow][newCol];
        //         matrix[newRow][newCol] = matrix[i][j];

        //         currRow = newRow;
        //         currCol = newCol;
        //     }
        // }
    }
};