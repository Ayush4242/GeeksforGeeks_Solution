class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        // map<int,int>mp;
        // for(auto i:arr){
        //     mp[i]++;
        // }
        // for(auto i:mp){
        //     if(i.first==2){
        //         res=2;
        //         break;
        //     }
        // }
        int res=0,res1=0;
        unordered_set<int>st;
        for(auto i:arr){
            if(st.count(i)){
                res=i;
                // break;
            }
            st.insert(i);
        }
        for(int i=1;i<=arr.size();i++){
            if(st.count(i)==0){
                res1=i;
                break;
            }
        }
        return {res,res1};
        
    }
};