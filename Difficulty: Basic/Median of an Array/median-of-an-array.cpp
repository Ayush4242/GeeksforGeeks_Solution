class Solution {
  public:
    double findMedian(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int val=arr.size()/2.0,c=0;
        if(arr.size()%2!=0){
            return arr[val];
        }
        return (arr[val-1]+arr[val])/2.0; 
        
    }
};