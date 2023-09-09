class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // uses Moore's voting algorithm
        // intuition : the majority element will get the most votes 
        // and will always be the one ending up as the final candidate with the max vote counts

        int candidate = INT_MAX, count = 0;

        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] == candidate) count++;
            else count--;

            if( count < 0 ){
                candidate = nums[i];
                count = 0;
            }
        }
        return candidate;
    }
};