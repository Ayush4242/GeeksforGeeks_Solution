class Solution {
  public:
    long long int maximizeSum(long long int a[], int n, int k) {
        sort(a,a+n);
        int c=0;
        long long s=0;;
        for(int i=0;i<n;i++){
            if(a[i]<0 && c<k){
                a[i]=-(a[i]);
                s+=a[i];
                c++;
            }
            else{
                s+=a[i];
            }
        }
        long long rem=k-c,mini=LLONG_MAX;
        if(rem%2!=0){
            for(int i=0;i<n;i++){
                mini=min(mini,llabs(a[i]));
            }
            s=s-(2*mini);
        }
        
        return s;
        
    }
};