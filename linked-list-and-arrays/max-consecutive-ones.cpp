class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = INT_MIN, len = 0;
        int left = 0, right = 0;

        while(right < nums.size() && left < nums.size()){
            if(nums[right] == 1){
                len++;
                right++;
            } else {
                left = right+1;
                right = left;
                len = 0;
            }
            maxLen = max(len,maxLen);
        }
        return maxLen;
    }
};