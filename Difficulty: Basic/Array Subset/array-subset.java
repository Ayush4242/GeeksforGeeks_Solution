
class Solution {
    public boolean isSubset(int a[], int b[]) {
        HashMap<Integer,Integer>mp1=new HashMap<>();
        for(int i:a){
            mp1.put(i,mp1.getOrDefault(i,0)+1);
        }
        HashMap<Integer,Integer>mp2=new HashMap<>();
        for(int i:b){
            mp2.put(i,mp2.getOrDefault(i,0)+1);
        }
        for(int i:mp2.keySet()){
            if(mp1.getOrDefault(i,0)<mp2.get(i)){
                return false;
            }
        }
        return true;
        
    }
}
