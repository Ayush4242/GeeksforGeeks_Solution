class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end(),greater<int>());
        vector<int>res;
        int i=0;
        while(k>0){
            res.push_back(arr[i]);
            i++;
            k--;
        }
        return res;
        
    }
};