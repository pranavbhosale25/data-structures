class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> solSet;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        long sum, low, high;
        for(int i = 0; i < n-3 ; i++){
            for(int j = i+1; j < n-2 ; j++){
                sum = target - nums[i];
                sum -= nums[j];
                low = j+1;
                high = n-1;

                while( low < high){
                    if(nums[low] + nums[high] == sum){
                        vector<int> quad(4);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[low];
                        quad[3] = nums[high];
                        solSet.insert(quad);
                        low++;
                        high--;
                    } else if (nums[low] + nums[high] < sum){
                        low++;
                    } else {
                        high--;
                    }
                }
            }
        }

        vector<vector<int>> sol;
        for( auto quad : solSet){
            sol.push_back(quad);
        }

        return sol;
    }
};
