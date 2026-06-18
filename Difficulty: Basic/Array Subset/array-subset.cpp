class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int size = a.size();
        int size1 = b.size();
        int p = 0;
        int q = 0;
        for(int i = 0; i<size;i++) {
            if(a[i]==b[q]) {
                q++;
                p++;
            }
            if(q==size1) {
                break;
            }
        }
        if(p==size1) {
            return true;
        }
        return false;
    }
};