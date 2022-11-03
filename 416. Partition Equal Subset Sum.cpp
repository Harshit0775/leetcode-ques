class Solution {
public:
    
    bool subsetSum(vector<int> nums, int n , int targetSum){
        
       bool dp[n+1][targetSum+1];
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=targetSum; j++){
                if(i==0) 
                    dp[i][j] = false;
                if(j==0)
                    dp[i][j] = true;
            } 
        }
        
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=targetSum; j++){
                if(j<nums[i-1]) dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i-1][j] or dp[i-1][j-nums[i-1]];
            }
        }
        
        return dp[n][targetSum];
        
    }
    
    bool canPartition(vector<int>& nums) {
        
       int sum  = 0;
       int n = nums.size();
        
        for(int i=0; i<nums.size(); i++)
            sum+=nums[i];
        
            if(sum%2!=0) return false;
            else  return subsetSum(nums,n,sum/2);
        
        
        
    }
};
