class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int sum=0;
        int size=arr.size();
        for(auto i:arr){
            sum+=i;
        }
        return floor(sum/size);
    }
};