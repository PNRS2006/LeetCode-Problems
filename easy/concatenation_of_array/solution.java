class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int a[] = new int[n * 2];
        System.arraycopy(nums , 0 , a , 0 , n);
        System.arraycopy(nums , 0 , a , n , n);
        return a;
    }
}