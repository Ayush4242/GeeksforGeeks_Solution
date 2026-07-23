class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
       sort(arr.begin(),arr.end());
       sort(dep.begin(),dep.end());
       int i=0,j=0,maxi=0,c=0;
       while(i<arr.size() && j<dep.size()){
           if(arr[i]<=dep[j]){
               c++;
               i++;
               maxi=max(maxi,c);
           }
           else{
               c--;
               j++;
           }
       }
       return maxi;
        
    }
};
