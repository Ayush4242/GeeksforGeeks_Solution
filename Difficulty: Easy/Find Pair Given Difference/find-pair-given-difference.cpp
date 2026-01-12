
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0,j=1,n=arr.size();
        while(i<n && j<n){
            if(arr[j]-arr[i]==x && i!=j){
                return true;
                
            }
            else if(arr[j]-arr[i]<x){
                j++;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
