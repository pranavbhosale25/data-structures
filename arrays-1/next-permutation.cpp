class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), lastAscending = n-2, swapIndex;

        for( ; lastAscending >= 0 ; lastAscending--){
            if(nums[lastAscending] < nums[lastAscending+1]){
                break;
            }
        }

        if( lastAscending >= 0 ){
            for( swapIndex = n-1 ; swapIndex > lastAscending ; swapIndex--){
                if( nums[swapIndex] > nums[lastAscending] ){
                    break;
                }
            }
            swap(nums[lastAscending], nums[swapIndex]);
            reverse(nums.begin()+lastAscending+1, nums.end());
        } else {
            reverse(nums.begin(), nums.end());
        }
    }
};