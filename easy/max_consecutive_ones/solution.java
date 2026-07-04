class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int a = 0;
        int c = 0;
        for(int i : nums){
            if(i == 1) {
                c++;
                a = Math.max(a,c);
            }
            else c = 0;
        }
        return a;
    }
}