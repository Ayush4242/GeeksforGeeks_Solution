class Solution {
  public:
    int findMean(vector<int>& arr) {
        int sum=0;
        for(auto i:arr){
            sum+=i;
        }
        return floor(sum/arr.size());
        
    }
};