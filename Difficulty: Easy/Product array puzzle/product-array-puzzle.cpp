class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int>prefix(arr.size(),1);
        vector<int>suffix(arr.size(),1);
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]*arr[i-1];
        }
        for(int i=arr.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*arr[i+1];
        }
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            res.push_back(suffix[i]*prefix[i]);
        }
        return res;
        
    }
};
