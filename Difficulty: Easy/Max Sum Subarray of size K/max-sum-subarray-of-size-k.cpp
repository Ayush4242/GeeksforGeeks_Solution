class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i=0,j=0,c=0,maxi=INT_MIN,sum=0;
        while(j<arr.size()){
            sum+=arr[j];
            
            c++;
            while(c>k){
                sum-=arr[i];
                c--;
                i++;
            }
            maxi=max(maxi,sum);
            j++;
        }
        return maxi; 
    }
};