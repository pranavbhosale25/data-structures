class Solution {
public:
    void subsetHelper(int index, vector<int> nums, set<vector<int>> &subsets, vector<int> &currSubset){
        if(index == nums.size()){
            subsets.insert(currSubset);
            return;
        }
        
        currSubset.push_back(nums[index]);
        subsetHelper(index+1,nums,subsets,currSubset);
        currSubset.pop_back();
        subsetHelper(index+1,nums,subsets,currSubset);

    } 


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ansSets;
        vector<int> currSubset;
        sort(nums.begin(),nums.end());
        subsetHelper(0,nums,ansSets,currSubset);

        vector<vector<int>> result;
        for(auto subset : ansSets){
            result.push_back(subset);
        } 

        return result;
    }
};