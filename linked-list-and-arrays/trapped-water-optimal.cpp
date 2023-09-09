class Solution {
public:
    int trap(vector<int>& h) {

        int n = h.size();
        int left = 0, right = n-1;
        int leftMax = 0, rightMax = 0;

        int totalWater = 0;
        while(left < right ){
            if( h[left] <= h[right]){
                if(h[left] > leftMax) leftMax = h[left];
                totalWater += leftMax - h[left];
                left++;
            } else {
                if(h[right] > rightMax) rightMax = h[right];
                totalWater += rightMax - h[right];
                right--;
            }
        }

        return totalWater;
    }
};