class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int i=0,j=0,c=0;
        vector<int>ans;
        unordered_map<int,int>mp;
        while(j<arr.size()){
            mp[arr[j]]++;
            if(j-i+1<k){
                j++;
                
            }
            else{
                ans.push_back(mp.size());
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
                j++;
            }
            
            
        }
        return ans;
    }
};