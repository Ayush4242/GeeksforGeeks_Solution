class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int maxind=n-1,minind=0,maxelem=arr[n-1]+1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]+=(arr[maxind]%maxelem)*maxelem;
                maxind--;
            }
            else{
                arr[i]+=(arr[minind]%maxelem)*maxelem;
                minind++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/maxelem;
        }
        
        
    }
};