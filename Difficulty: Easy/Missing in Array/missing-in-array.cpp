class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int xor1=0,xor2=0;
        for(int i=1;i<=arr.size()+1;i++){
            xor1^=i;
        }
        for(auto i:arr){
            xor2^=i;
        }
        return xor1^xor2;
        
    }
};