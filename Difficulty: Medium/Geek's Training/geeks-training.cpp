class Solution {
  public:
    int maximumPoints(int day,int last,vector<vector<int>>&dp,vector<vector<int>>& arr) {
        if (dp[day][last] != -1) return dp[day][last];
        if(day==0){
            int maxi=0;
            for(int i=0;i<3;i++){
                if(i!=last){
                    maxi=max(maxi,arr[0][i]);
                }
            }
            return maxi;
            
        }
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last){
                int points=arr[day][i]+maximumPoints(day-1,i,dp,arr);
                maxi=max(maxi,points);
            }
        }
         return dp[day][last] = maxi;
        
    }
    int maximumPoints(vector<vector<int>>& arr){
        int n=arr.size();
       
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return maximumPoints(n-1,3,dp,arr);
    }
};