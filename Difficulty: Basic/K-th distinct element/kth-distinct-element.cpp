class Solution {
  public:
    int KthDistinct(vector<int> nums, int k) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int c=0;
        for(auto i:nums){
            if(mp[i]==1){
                c++;
            }
            if(mp[i]==1 && c==k){
                return i;
            }
            
        }
        return -1;
    }
};