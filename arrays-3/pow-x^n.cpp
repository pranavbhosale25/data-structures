


// class Solution {
// public:
//     double myPow(double x, int n) {
//         if( n == 0 ) return 1.0;
//         if( x == 0 || x == 1) return x;

//         double ans = 1;
       
//        if( n > 0 ){
//            for( long long i = 0 ; i < n ; i++){
//                ans *= x;
//            }
//            return ans;
//        } else {
//            for( long long i = 0 ; i < abs(n) ; i++){
//                ans /= x;
//            }
//            return ans;
//        }
// }
// };

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0){
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0) return myPow(x*x,n/2);
        else return x*myPow(x,n-1);
        // if(n%2==0) return myPow(x,n/2) * myPow(x,n/2);
        // else return x * myPow(x,n/2) * myPow(x,n/2);

    }
};
