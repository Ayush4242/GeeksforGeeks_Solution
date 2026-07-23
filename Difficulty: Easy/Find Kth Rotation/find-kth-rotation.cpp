class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int c=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                return i;
            }
        }
        return 0;
        // return c;
    }
};
