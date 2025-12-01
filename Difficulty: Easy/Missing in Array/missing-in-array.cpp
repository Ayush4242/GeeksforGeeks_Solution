class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xor1=0;
        for(int i=1;i<=arr.size()+1;i++){
            xor1^=i;
        }
        for(int i=0;i<arr.size();i++){
            xor1=xor1^arr[i];
        }
        return xor1;
    }
};