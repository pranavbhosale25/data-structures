class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;

        int lookFor = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            lookFor = target - nums[i];
            if(map.find(lookFor) != map.end()){
                ans.push_back(map[lookFor]);
                ans.push_back(i);
                return ans;
            } else{
                map[nums[i]] = i;
            }
        }
        return ans;
    }
};