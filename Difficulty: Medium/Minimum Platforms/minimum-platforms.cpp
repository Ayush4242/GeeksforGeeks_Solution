class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int i=1,j=0,plat=1,maxi=1;
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        while(i<arr.size() && j<dep.size()){
            if(arr[i]<=dep[j]){
                plat++;
                i++;
            }
            else{
                plat--;
                j++;
            }
            maxi=max(maxi,plat);
        }
        return maxi;
    }
};
