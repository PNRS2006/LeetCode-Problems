class Solution {
    public boolean isArraySpecial(int[] n) {
        if(n.length<=1) return true;
        for(int i=0;i<n.length-1;i++){
            if((n[i]%2==0 && n[i+1]%2!=0) || (n[i]%2!=0 && n[i+1]%2==0)) continue;
            else return false;
        }
        return true;
    }
}