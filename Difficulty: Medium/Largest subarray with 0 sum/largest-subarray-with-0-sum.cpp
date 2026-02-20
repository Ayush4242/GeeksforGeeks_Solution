class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int sum=0,maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==0){
                maxi=max(maxi,i+1);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            else{
                if(mp.find(sum)!=mp.end()){
                    maxi=max(maxi,i-mp[sum]);
                }
            }
        }
        return maxi;
        
    }
};