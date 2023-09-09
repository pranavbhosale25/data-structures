class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascals;

        vector<int> temp;

        temp.push_back(1);

        if( numRows == 1 ){
            return temp;
        }

        pascals.push_back(currRow);

        for( int i = 1 ; i < numRows ; i++ ){
            vector<int> currRow;

            currRow.push_back(1);

            for( int j = 1 ; j < i ; j++ ){
                currRow.push_back(pascals[i-1][j-1] + pascals[i-1][j]);
            }
            
            currRow.push_back(1);

            pascals.push_back(currRow);

        }

        return pascals;

    }
};