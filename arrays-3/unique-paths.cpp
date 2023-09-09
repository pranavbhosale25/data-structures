class Solution {
public:
    int uniquePaths(int m, int n) {
        // sol #2 : can be optimized by using just two rows
        // sol #3 : can use combinatorics : (m+n-2)C(m-1)
        // logic : choose m-1 downs and n-1 rights
        // from total m+n-2 moves choose m-1 downs (or n-1 rights) 

        int arr[m][n];

        for( int i = 0 ; i < m ; i++){
            arr[i][0] = 1;
        }

        for( int i = 0 ; i < n ; i++){
            arr[0][i] = 1;
        }

        for( int i = 1 ; i < m ; i++){
            for( int j = 1 ; j < n ; j++){
                arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }
        
        return arr[m-1][n-1];
    }
};