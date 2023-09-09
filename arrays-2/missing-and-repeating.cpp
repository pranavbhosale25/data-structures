#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // calculate s get x-y
    // calculate sum of squares and get x2 - y2
    // get x+y 
    // get x and y

    long long sum = 0;
    long long squareSum = 0;
    for( int i = 0 ; i < n ; i++){
        sum += arr[i];
        squareSum += arr[i]*arr[i];
    }
    

    long long xMinusY = ((n*(n+1))/2) - sum;
    long long diffSquares = ((n*(n+1)*(2*n+1))/6) - squareSum;

    long long xPlusY = diffSquares/xMinusY;

    long long x = (xPlusY + xMinusY)/2;
    long long y = (xPlusY - xMinusY)/2;

    pair<int,int> ans;

    for( int i = 0 ; i < n ; i++){
        if( arr[i] == x){
            // x is repeating, y is missing
            ans.first = y;
            ans.second = x;
            return ans;
        }

        if( arr[i] == y){
            // y is repeating, x is missing
            ans.first = x;
            ans.second = y;
            return ans;
        }

    }
    
}
