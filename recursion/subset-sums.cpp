class Solution
{
public:

    void subsetSumHelper(int index, vector<int> &arr, int n, vector<int> &ans, int sum){
        if( index == n){
            ans.push_back(sum);
            return;
        }
        
        subsetSumHelper(index+1, arr, n, ans, sum+arr[index]);
        subsetSumHelper(index+1, arr, n, ans, sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        subsetSumHelper(0,arr,N,ans,0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};