class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int size=arr.size();
        vector<int>prefix(size,0);
        vector<int>suffix(size,0);
        for(int i=1;i<size;i++){
            prefix[i]=prefix[i-1]+arr[i-1];
        }
        for(int i=arr.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]+arr[i+1];
        }
        for(int i=0;i<size;i++){
            if(prefix[i]==suffix[i]){
                return i;
            }
        }
        return -1;
    }
};