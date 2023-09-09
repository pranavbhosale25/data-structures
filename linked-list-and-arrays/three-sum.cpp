class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());

        set<vector<int>> threeSumSet;

        for(int i = 0 ; i < n-2 ; i++){
            int j = i+1 ; 
            int k = n-1 ;
            while( j < k ){
                int sum = nums[i] + nums[j] + nums[k] ;
                if(sum == 0){
                    threeSumSet.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if(sum < 0) j++;
                else k--;
            }
        }

        vector<vector<int>> result;
        for( auto v : threeSumSet){
            result.push_back(v);
        }

        return result;
    }
};