// User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find
int Search(vector<int>vec, int K) {
    
    int n=vec.size(),mid=-1;
    int low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if (vec[mid] == K)
            return mid;
        if(vec[low]<vec[mid]){
            if(vec[low]<=K && K<=vec[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(vec[mid]<=K && K<=vec[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
    
}