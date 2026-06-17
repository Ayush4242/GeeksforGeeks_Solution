class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int c0=0,c1=0,maxi=-1,maxi1=-1,maxifin=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            c0++;
            c1=0;
            maxi=max(maxi,c0);
        }
        else{
            c1++;
            c0=0;
            maxi1=max(maxi1,c1);
        }
    }
    maxifin=max(maxi,maxi1);
    return maxifin;
        
    }
};