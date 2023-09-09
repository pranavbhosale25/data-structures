class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // set<int> rows, cols;

        // for( int i = 0 ; i < matrix.size() ; i++){
        //     for( int j = 0 ; j < matrix[0].size() ; j++){
        //         if(matrix[i][j] == 0){
        //             rows.insert(i);
        //             cols.insert(j);
        //         }
        //     }
        // }

        // for( auto i : rows){
        //     for( int m = 0 ; m < matrix[0].size() ; m++){
        //         matrix[i][m] = 0;
        //     }
        // }

        // for( auto i : cols){
        //     for( int m = 0 ; m < matrix.size() ; m++){
        //         matrix[m][i] = 0;
        //     }
        // }
        bool col0 = false; 

        if( matrix[0][0] == 0 ){
            col0 = true;
        }

        for( int i = 0 ; i < matrix.size() ;  i++ ){
            for ( int j = 0 ; j < matrix[0].size() ; j++ ){
                if ( matrix[i][j] == 0 ){
                    matrix[i][0] = 0;
                    if (j != 0){
                        // row0 marker
                        matrix[0][j] = 0;
                    } else {
                        // col0 marker
                        col0 = true;
                    }
                }
            }
        }

        for( int i = 1 ; i < matrix.size() ;  i++ ){
            for ( int j = 1 ; j < matrix[0].size() ; j++ ){
                if( matrix[i][j] != 0){
                    if ( matrix[i][0] == 0 || matrix[0][j] == 0 ){
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if(matrix[0][0] == 0){
            for( int i = 0 ; i < matrix[0].size() ; i++){
                matrix[0][i] = 0;
            }
        }

        if(col0){
            for( int i = 0 ; i < matrix.size() ; i++){
                matrix[i][0] = 0;
            }
        }
    }  
};
