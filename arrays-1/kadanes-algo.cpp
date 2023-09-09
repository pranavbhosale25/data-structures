class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum = 0, ans = -100000;

        for( int i = 0 ; i < arr.size() ; i++ ){
            sum += arr[i];
            ans = max(sum, ans);
            if ( sum < 0 ){
                sum = 0;
            }
        }

        return ans;
    }
};