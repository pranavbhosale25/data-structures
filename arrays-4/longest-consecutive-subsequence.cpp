class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        int maxLen = 0, len = 0;
        int current;
        for( int element : nums){
            numSet.insert(element);
        }


        for( int element : nums){
            if(numSet.find(element-1) == numSet.end()){
                current = element;
                while(numSet.find(current) != numSet.end()){
                    len++;
                    current++;
                }
                maxLen = max(len,maxLen);
                len = 0;
            }
        }

        return maxLen;
    }
};