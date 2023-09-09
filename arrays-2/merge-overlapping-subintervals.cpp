class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        if( intervals.size() == 1 ) return intervals;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergedIntervals;

        vector<int> currInterval = intervals[0]; 
        vector<int> nextInterval;
        
        for( int i = 1 ; i < intervals.size() ; i++ ){
            nextInterval = intervals[i];

            if( nextInterval[0] <= currInterval[1] ){
                // yes merge
                if( nextInterval[1] > currInterval[1]) {
                    currInterval[1] = nextInterval[1];
                } else {
                    // keep currInterval end same
                }
            } else {
                // no merge 
                mergedIntervals.push_back(currInterval);
                currInterval = nextInterval;
            }
        }

        mergedIntervals.push_back(currInterval);
        return mergedIntervals;
    }
};