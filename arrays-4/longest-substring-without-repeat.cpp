class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(size == 0 || size == 1 ) return size;
        int maxLen = INT_MIN;

        unordered_map<char,int> charMap;

        int left = 0;

        for(int right = 0 ; right < size ; right++){
            if( charMap.find(s[right]) == charMap.end() || charMap[s[right]] < left ){
                charMap[s[right]] = right;
                maxLen = max(maxLen, right - left + 1);
            } else {
                left = charMap[s[right]] +1;
                charMap[s[right]] = right;
            }
        }
       return maxLen;
    }
};