class Solution {
  public:
    int transform(string A, string B) {
        int Alen=A.length(),Blen=B.length();
        int i=Alen-1,j=Blen-1,c=0;
        unordered_map<char,int>mp;
        for(auto i:A){
            mp[i]++;
        }
        for(auto j:B){
            mp[j]--;
        }
        for(auto i:mp){
            if(i.second!=0){
                return -1;
            }
        }
        
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                c++;
                i--;
            }
        }
        return c;
    }
};
