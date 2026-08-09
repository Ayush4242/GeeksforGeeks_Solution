class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        int i=0,j=0,sum=0,mini=INT_MAX;
        while(j<arr.size()){
            sum+=arr[j];
            while(sum>x){
                mini=min(mini,j-i+1);
                sum-=arr[i];
                i++;
            }
            
            j++;
        }
        return mini==INT_MAX?0:mini;
    }
};