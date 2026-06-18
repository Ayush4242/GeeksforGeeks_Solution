class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        vector<int>prefix(arr.size(),0);
        vector<int>suffix(arr.size(),0);
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]+arr[i-1];
        }
        for(int i=arr.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]+arr[i+1];
        }
        for(int i=0;i<arr.size();i++){
            if(prefix[i]==suffix[i]){
                return i;
            }
        }
        return -1;
    }
};