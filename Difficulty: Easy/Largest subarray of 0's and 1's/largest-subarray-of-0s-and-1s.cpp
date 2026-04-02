class Solution {
  public:
    int maxLen(vector<int> &arr) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0,maxi=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr[i]=-1;
            }
        }
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return maxi;
    }
};