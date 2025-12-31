class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0,j=0,c=0,maxi=INT_MIN;
        while(i<arr.size() && j<arr.size()){
            if(arr[i]<=dep[j]){
                c++;
               
                i++;
            }
            else{
                c--;
                j++;
            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};
