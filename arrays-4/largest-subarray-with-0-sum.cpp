class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        unordered_map<int,int> encounteredSums;
        encounteredSums[0] = -1;
        int maxLen = 0, currSum = 0;
        for( int i = 0 ; i < n ; i++ ){
            currSum += arr[i];
            if( encounteredSums.find(currSum) != encounteredSums.end()){
                maxLen = max(maxLen, i-encounteredSums[currSum]);
            } else {
                encounteredSums[currSum] = i;
            }
        }
        return maxLen;
    }
};