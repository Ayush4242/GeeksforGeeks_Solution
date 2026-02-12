// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        vector<int>freq1(26,0),freq2(26,0);
        for(auto i:pat){
            freq1[i-'a']++;
        }
        int i=0,j=0,c=0;
        while(j<txt.length()){
            freq2[txt[j]-'a']++;
            if(j-i+1>pat.size()){
                freq2[txt[i]-'a']--;
                i++;
            }
            if(freq1==freq2){
                c++;
            }
            j++;
        }
        return c;
        
    }
};