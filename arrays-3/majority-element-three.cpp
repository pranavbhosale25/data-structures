class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // using Boyer-Moore voting algo
        
       int cand1=0, cand2 = 0;
       int count1 = 0, count2 = 0;

       for( int i = 0 ; i < nums.size() ; i++ ){
           if( nums[i] == cand1){
               count1++;
           }
           else if( nums[i] == cand2){
               count2++;
           }
           else if( count1 == 0 ){
               cand1 = nums[i];
               count1 = 1;
           }
           else if( count2 == 0 ){
               cand2 = nums[i];
               count2 = 1;
           }
           else{
               count1--;
               count2--;
           }
       }

        count1 = 0;
        count2 = 0;
        for( auto i : nums){
            if( i == cand1){
                count1++;
            }
            if( i == cand2){
                count2++;
            }
        }

        vector<int> result;
        if(count1 > nums.size()/3){
            result.push_back(cand1);
        }
        if(count2 > nums.size()/3 && cand1 != cand2){
            result.push_back(cand2);
        }
        return result;
    }
};