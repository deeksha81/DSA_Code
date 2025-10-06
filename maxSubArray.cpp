class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        // Code here
        int n = arr.size();
        
        int currSubSum = arr[0];
        int maxSumSub = arr[0];
        
        for(int i = 1;i<n;i++){
            
            currSubSum = max(arr[i],currSubSum+arr[i]);
            maxSumSub = max(currSubSum,maxSumSub);
            
        }
        
        return maxSumSub;
    }
};
        
    
