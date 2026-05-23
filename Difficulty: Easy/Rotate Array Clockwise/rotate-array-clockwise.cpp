class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        int size=arr.size();
        k=k%size;
        reverse(arr.begin()+(size-k),arr.end());
        reverse(arr.begin(),arr.begin()+(size-k));
        reverse(arr.begin(),arr.end());
    }
};
