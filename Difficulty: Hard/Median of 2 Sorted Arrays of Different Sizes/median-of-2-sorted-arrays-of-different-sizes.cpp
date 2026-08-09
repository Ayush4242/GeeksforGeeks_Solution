class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int i=0,j=0;
        vector<int>ans;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            ans.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            ans.push_back(b[j]);
            j++;
        }
        double r=0;
        if((ans.size())%2==0){
            r=(ans[(ans.size())/2]+ans[((ans.size())/2)-1])/2.0;
        }
        else{
            r=ans[(ans.size())/2];
        }
        return r;
    }
};