class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int maxProfit = 0;
        int lowestPrice = *v.begin();

        for( auto it = v.begin(); it != v.end(); ++it){
            if ( *it < lowestPrice ){
                lowestPrice = *it;
            }
            maxProfit = max(*it-lowestPrice, maxProfit);
        }

        return maxProfit;
    }
};