class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int,int>mp;
        // unordered_map<int,int>mp2;
        for(auto i:a){
            mp[i]++;
        }
        for(auto i:b){
            if(mp[i]<=0){
                return false;
            }
            mp[i]--;
        }
        return true;
    }
};